/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 10:53:47 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/09 20:20:55 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	is_in_first_half(t_stack *stack, int x)
{
	t_stack	*tmp;
	int		len;

	len = get_size(stack) / 2;
	tmp = stack;
	while (len)
	{
		if (tmp->index == x)
			return (1);
		len--;
		tmp = tmp->next;
	}
	return (0);
}

static int	last_ind(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp->index);
}

static void	first_half(t_var *var, int *flag)
{
	while ((var->head_b->index != var->head_a->index - 1)
		&& get_size(var->head_b))
	{
		if ((var->head_b->index > (last_ind(var->head_a))) || !*flag)
		{
			pa(&var->head_a, &var->head_b);
			ra(&var->head_a);
			*flag = 1;
		}
		else
			rb(&var->head_b);
	}
	pa(&var->head_a, &var->head_b);
}

static void	secend_half(t_var *var, int *flag)
{
	while ((var->head_b->index != var->head_a->index - 1)
		&& get_size(var->head_b))
	{
		if ((var->head_b->index > (last_ind(var->head_a))) || !*flag)
		{
			pa(&var->head_a, &var->head_b);
			ra(&var->head_a);
			*flag = 1;
		}
		else
			rrb(&var->head_b);
	}
	pa(&var->head_a, &var->head_b);
}
void	send_to_a(t_var *var)
{
	int	flag;

	flag = 0;
	while (get_size(var->head_b))
	{
		if (is_in_first_half(var->head_b, var->head_a->index - 1))
		{
			first_half(var, &flag);
		}
		else
		{
			secend_half(var, &flag);
		}
		while (last_ind(var->head_a) == var->head_a->index - 1)
			rra(&var->head_a);
		if (search_max(var) == last_ind(var->head_a))
			flag = 0;
	}
}
