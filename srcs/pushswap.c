/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:50:30 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/28 15:00:28 by aelomari         ###   ########.fr       */
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

int	search_max(s_var *var)
{
	int		max;
	s_stack	*temp;

	temp = var->head_a;
	max = temp->val;
	while (temp)
	{
		if (temp->val > max)
			max = temp->val;
		temp = temp->next;
	}
	return (max);
}

void	sortfive(s_var *var)
{
	int		min;
	s_stack	*tmp;

	if (issorted(var->head_a))
		return ;
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
		if (issorted(var->head_a))
			return ;
		pb(&var->head_a, &var->head_b);
		sortfour(var);
		pa(&var->head_a, &var->head_b);
	}
	else if (min == tmp->next->next->val)
	{
		rra(&var->head_a);
		rra(&var->head_a);
		rra(&var->head_a);
		if (issorted(var->head_a))
			return ;
		pb(&var->head_a, &var->head_b);
		sortfour(var);
		pa(&var->head_a, &var->head_b);
	}
	else if (min == tmp->next->next->next->val)
	{
		rra(&var->head_a);
		rra(&var->head_a);
		if (issorted(var->head_a))
			return ;
		pb(&var->head_a, &var->head_b);
		sortfour(var);
		pa(&var->head_a, &var->head_b);
	}
	else if (min == tmp->next->next->next->next->val)
	{
		rra(&var->head_a);
		if (issorted(var->head_a))
			return ;
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

	if (issorted(var->head_a))
		return ;
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
		if (issorted(var->head_a))
			return ;
		pb(&var->head_a, &var->head_b);
		sorttree(var);
		pa(&var->head_a, &var->head_b);
	}
	else if (min == tmp->next->next->val)
	{
		rra(&var->head_a);
		rra(&var->head_a);
		if (issorted(var->head_a))
			return ;
		pb(&var->head_a, &var->head_b);
		sorttree(var);
		pa(&var->head_a, &var->head_b);
	}
	else
	{
		rra(&var->head_a);
		if (issorted(var->head_a))
			return ;
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
	else
		send_to_b(var);
		send_to_a(var);
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
	if (!*var->args)
		errornl();
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
	int	y;

	var->head_a = NULL;
	var->head_b = NULL;
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
			ft_stacknew(ft_atoi(var->args[var->size]), 0));
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

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
void	bubblesort(s_var *var)
{
	int	i;
	int	j;

	i = 0;
	while (i < var->size)
	{
		j = 0;
		while (j < var->size - i - 1)
		{
			if (var->arr[j] > var->arr[j + 1])
				swap(&var->arr[j], &var->arr[j + 1]);
			j++;
		}
		i++;
	}
}

void	indexit(s_var *var)
{
	s_stack	*tmp;
	int		i;

	tmp = var->head_a;
	while (tmp)
	{
		i = 0;
		while (i < var->size)
		{
			if (tmp->val == var->arr[i])
				tmp->index = i;
			i++;
		}
		tmp = tmp->next;
	}
}

void	indexstack(s_var *var)
{
	int		i;
	s_stack	*tmp;

	var->arr = (int *)malloc((var->size) * sizeof(int));
	tmp = var->head_a;
	i = 0;
	while (tmp)
	{
		var->arr[i] = tmp->val;
		tmp = tmp->next;
		i++;
	}
	bubblesort(var);
	indexit(var);
}
int get_size(s_stack *stack)
{
    s_stack *tmp;
    int i;

    i = 0;
    tmp = stack;
    if (!tmp)
        return 0;
    while (tmp)
    {
        i++;
        tmp = tmp->next;
    }
    return i;
}


int	main(int ac, char **av)
{
	s_var	*var;
	// s_stack	*tmp;

	if (ac >= 2)
	{
		var = (s_var *)malloc(sizeof(s_var));

		joinargs(av, ac, var);
		initstack(var);
		isdup(var->head_a);
		if (issorted(var->head_a))
			exit(0);
		indexstack(var);
		
		sortit(var);
		// tmp = var->head_a;
		// printf("_________________________________________\n");
		// while (tmp)
		// {
		// 	printf("index  = %d \tnum %d\n", tmp->index, tmp->val);
		// 	tmp = tmp->next;
		// }
		// printf("_________________________________________\n");
		// pb(&var->head_a, &var->head_b);
		// tmp = var->head_b;
		// if(!tmp)
		// return 1;
		// while (tmp)
		// {
		// 	printf("index  = %d \tnum %d\n", tmp->index, tmp->val);
		// 	tmp = tmp->next;
		// }
		// printf("_________________________________________");
		// printf("_________________________________________");
		// printf("|%d|", get_size(var->head_a));
		// printf("_________________________________________");
	}
	return (0);
}
