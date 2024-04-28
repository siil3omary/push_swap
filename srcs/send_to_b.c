/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 10:54:22 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/28 17:14:06 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	calcul_piv(int *rem, int *pivot_1, int *pivot_2, s_stack *a)
{
	*rem = *pivot_1;
	*pivot_2 = (get_size(a) / 6) + (*pivot_1);
	*pivot_1 += (get_size(a) / 3);
}

int	in_stack(s_stack *stack, int piv)
{
	s_stack	*tmp;

	tmp = stack;
	if (!stack)
	{
		return (-1);
	}
	while (tmp)
	{
		if (tmp->index < piv)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
void	send_to_b(s_var *var)
{
	int	pivot_1;
	int	pivot_2;
	int	rem;

	rem = -1;
	pivot_2 = (get_size(var->head_a) / 6);
	pivot_1 = (get_size(var->head_a) / 3);
	while (get_size(var->head_a) > 3)
	{
		if (get_size(var->head_b) >= 2 && var->head_a->index > pivot_1
			&& var->head_b->index > rem && var->head_b->index < pivot_2)
			rr(&var->head_a, &var->head_b);
		else if (get_size(var->head_b) >= 2 && var->head_b->index > rem
			&& var->head_b->index < pivot_2)
			rb(&var->head_b);
		if (var->head_a->index < pivot_1)
			pb(&var->head_a, &var->head_b);
		else
			ra(&var->head_a);
		if (!in_stack(var->head_a, pivot_1))
			calcul_piv(&rem, &pivot_1, &pivot_2, var->head_a);
	}
	sorttree(var);
}
