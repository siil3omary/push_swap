/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:59:57 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/15 15:56:18 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	isdup(t_stack *stack, t_var *var)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = stack;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp->val == tmp2->val)
				errornl(var);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}

void	joinargs(int ac, char **av, t_var *var)
{
	int		i;
	char	*tmp;
	char	*args;

	args = NULL;
	var->avs = NULL;
	var->args = NULL;
	i = 1;
	while (i <= ac - 1)
	{
		tmp = ft_strjoin(av[i], " ");
		args = var->avs;
		var->avs = ft_strjoin(var->avs, tmp);
		free(args);
		free(tmp);
		i++;
	}
	var->args = ft_split(var->avs, ' ');
	free(var->avs);
}

void	initstack(t_var *var)
{
	int	j;

	var->stack_a = NULL;
	var->stack_b = NULL;
	var->size = 0;
	while (var->args[var->size])
	{
		j = 0;
		while (var->args[var->size][j])
		{
			if (!ft_isdigit(var->args[var->size][j]))
			{
				free_all(var->args);
				free_stack(&var->stack_a);	
				errornl(var);
			}
			j++;
		}
		ft_stackaddback(&var->stack_a,
			ft_stacknew(ft_atoi(var->args[var->size])));
		var->size++;
	}
	free_all(var->args);
}

int	checking(char *line, t_var *var)
{
	if (!ft_strncmp(line, "ra\n", 3))
		ra(&var->stack_a);
	else if (!ft_strncmp(line, "rb\n", 3))
		rb(&var->stack_b);
	else if (!ft_strncmp(line, "pa\n", 3))
		pa(&var->stack_a, &var->stack_b);
	else if (!ft_strncmp(line, "pb\n", 3))
		pb(&var->stack_a, &var->stack_b);
	else if (!ft_strncmp(line, "rr\n", 3))
		rr(&var->stack_a, &var->stack_b);
	else if (!ft_strncmp(line, "sa\n", 3))
		sa(&var->stack_a);
	else if (!ft_strncmp(line, "sb\n", 3))
		sb(&var->stack_b);
	else if (!ft_strncmp(line, "ss\n", 3))
		ss(&var->stack_a, &var->stack_b);
	else if (!ft_strncmp(line, "rrr\n", 4))
		rrr(&var->stack_a, &var->stack_b);
	else if (!ft_strncmp(line, "rra\n", 4))
		rra(&var->stack_a);
	else if (!ft_strncmp(line, "rrb\n", 4))
		rrb(&var->stack_b);
	else
		return(free(line), errornl(var), 0)	;
	return (1);
}

int	main(int ac, char **av)
{
	t_var	*var;
	char	*line;

	if (ac >= 2)
	{
		var = (t_var *)malloc(sizeof(t_var));
		joinargs(ac, av, var);
		initstack(var);
		isdup(var->stack_a, var);
		while (1)
		{
			line = get_next_line(STDIN_FILENO);
			if(!line)
				break;
			checking(line, var);
			free(line);
		}
		if (issorted(var->stack_a) && get_size(var->stack_a) == var->size)
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
		free_stack(&var->stack_b);
		free_stack(&var->stack_a);
		free(var);
	}
}
