/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:50:30 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/25 23:48:47 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

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
	i = 0;
	while (var->args[i])
	{
		y = 0;
		while (var->args[i][y])
		{
			if (!ft_isdigit(var->args[i][y]))
				errornl();
			y++;
		}
		ft_stackadd_back(&var->head_a, ft_stacknew(ft_atoi(var->args[i])));
		i++;
	}
}
void	errornl(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	issorted(s_stack *stack)
{
	s_stack	*temp;

	temp = stack;
	while (temp->next)
	{
		if (temp->val > temp->next->val)
			return ;
		temp = temp->next;
	}
	exit(0);
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
		issorted(var->head_a);
        pb(&(var->head_a), &(var->head_b));
        ra(&var->head_a);

        pa(&(var->head_a), &(var->head_b));
        
        
        ra(&var->head_a);
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
