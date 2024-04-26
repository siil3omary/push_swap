/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:50:30 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/26 13:37:58 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	search_min(s_var *var)
{
	int		min;
	s_stack	*temp;

	temp = var->head_a;
	min = temp->val;
	while (temp)
	{
		if (temp->val < min)
			min = temp->val;
		temp = temp->next;
	}
	return (min);
}

void	sortfive(s_var *var)
{
	int		min;
	s_stack	*tmp;

	min = search_min(var);
	tmp = var->head_a;
	if (min == tmp->val)
	{
		pb(&var->head_a, &var->head_b);
		sortfour(var);
		pa(&var->head_a, &var->head_b);
	}
	else if (min == tmp->next->val)
	{
		sa(&var->head_a);
		pb(&var->head_a, &var->head_b);
		sortfour(var);
		pa(&var->head_a, &var->head_b);
	}
	else if (min == tmp->next->next->val)
	{
		rra(&var->head_a);
		rra(&var->head_a);
		rra(&var->head_a);
		pb(&var->head_a, &var->head_b);
		sortfour(var);
		pa(&var->head_a, &var->head_b);
	}
	else if (min == tmp->next->next->next->val)
	{
		rra(&var->head_a);
		rra(&var->head_a);
		pb(&var->head_a, &var->head_b);
		sortfour(var);
		pa(&var->head_a, &var->head_b);
	}
	else if (min == tmp->next->next->next->next->val)
	{
		rra(&var->head_a);
		pb(&var->head_a, &var->head_b);
		sortfour(var);
		pa(&var->head_a, &var->head_b);
	}
}

void	sorttree(s_var *var)
{
	if (issorted(var->head_a))
		return ;
	if ((var->head_a->val > var->head_a->next->val)
		&& var->head_a->next->next->val > var->head_a->val)
		sa(&var->head_a);
	else if (var->head_a->val > var->head_a->next->val
		&& var->head_a->val > var->head_a->next->next->val
		&& var->head_a->next->val > var->head_a->next->next->val)
	{
		sa(&var->head_a);
		rra(&var->head_a);
	}
	else if (var->head_a->val > var->head_a->next->val
		&& var->head_a->next->val < var->head_a->next->next->val)
		ra(&var->head_a);
	else if (var->head_a->next->val > var->head_a->val
		&& var->head_a->next->val > var->head_a->next->next->val
		&& var->head_a->val < var->head_a->next->next->val)
	{
		sa(&var->head_a);
		ra(&var->head_a);
	}
	else
		rra(&var->head_a);
}
void	sortfour(s_var *var)
{
	int		min;
	s_stack	*tmp;

	min = search_min(var);
	tmp = var->head_a;
	if (min == tmp->val)
	{
		pb(&var->head_a, &var->head_b);
		sorttree(var);
		pa(&var->head_a, &var->head_b);
	}
	else if (min == tmp->next->val)
	{
		sa(&var->head_a);
		pb(&var->head_a, &var->head_b);
		sorttree(var);
		pa(&var->head_a, &var->head_b);
	}
	else if (min == tmp->next->next->val)
	{
		rra(&var->head_a);
		rra(&var->head_a);
		pb(&var->head_a, &var->head_b);
		sorttree(var);
		pa(&var->head_a, &var->head_b);
	}
	else
	{
		rra(&var->head_a);
		pb(&var->head_a, &var->head_b);
		sorttree(var);
		pa(&var->head_a, &var->head_b);
	}
}
void	sortit(s_var *var)
{
	if (var->size == 3)
		sorttree(var);
	else if (var->size == 4)
		sortfour(var);
	else if (var->size == 5)
		sortfive(var);
}
void	joinargs(char **av, int ac, s_var *var)
{
	char	*tmp;
	char	*old_avs;
	int		i;

	tmp = NULL;
	old_avs = NULL;
	var->avs = NULL;
	i = 1;
	while (i <= ac - 1)
	{
		tmp = ft_strjoin(av[i], " ");
		old_avs = var->avs;
		var->avs = ft_strjoin(var->avs, tmp);
		if (old_avs)
			free(old_avs);
		free(tmp);
		i++;
	}
	var->args = ft_split(var->avs, ' ');
}

void	isdup(s_stack *stack)
{
	s_stack	*temp;
	s_stack	*temp2;

	temp = stack;
	while (temp)
	{
		temp2 = temp->next;
		while (temp2)
		{
			if (temp->val == temp2->val)
				errornl();
			temp2 = temp2->next;
		}
		temp = temp->next;
	}
}
void	initstack(s_var *var)
{
	int	i;
	int	y;

	var->head_a = NULL;
	var->size = 0;
	while (var->args[var->size])
	{
		y = 0;
		while (var->args[var->size][y])
		{
			if (!ft_isdigit(var->args[var->size][y]))
				errornl();
			y++;
		}
		ft_stackadd_back(&var->head_a,
			ft_stacknew(ft_atoi(var->args[var->size])));
		var->size++;
	}
}
void	errornl(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

int	issorted(s_stack *stack)
{
	s_stack	*temp;

	temp = stack;
	while (temp->next)
	{
		if (temp->val > temp->next->val)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	main(int ac, char **av)
{
	s_var	*var;
	s_stack	*temp;
	int		i;

	if (ac >= 2)
	{
		i = 1;
		var = (s_var *)malloc(sizeof(s_var));
		joinargs(av, ac, var);
		initstack(var);
		isdup(var->head_a);
		if (issorted(var->head_a))
			exit(0);
		sortit(var);
		// rrr(&var->head_a, &var->head_b);
		// ra(&var->head_a);
		// ra(&var->head_a);
		// ra(&var->head_a);
		// ra(&var->head_a);
		temp = var->head_a;
		while (temp)
		{
			printf("%d      \n", temp->val);
			temp = temp->next;
		}
	}
	return (0);
}
