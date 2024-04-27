/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 10:54:22 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/27 13:50:44 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	calcul_piv(int *rem, int *pivot_1, int *pivot_2, s_stack *a)
{
	*rem = *pivot_1;
	*pivot_2 =  *pivot_1 + get_size(a) / 6 ;
	*pivot_1 += (get_size(a) / 3);
}

int in_stack(s_stack *stack, int piv)
{
	s_stack *tmp;
	while (tmp)
	{
		
		tmp = tmp->next;
	}
	
}
void	send_to_b(s_var *var)
{
	s_stack *a;
	s_stack *b;
	int pivot_1;
	int pivot_2;
	int rem;
	rem = -1;
	pivot_1 = 0;
	pivot_2 = 0;

	a = var->head_a;
	b = var->head_b;
	while (get_size(a) / 3)
	{
		calcul_piv(&rem, &pivot_1, &pivot_2, a);
		if (a->index < pivot_1 && in_stack(a ,pivot_1))
		{
			pb(&var->head_a, &var->head_b);
		}
		ra(&var->head_a);
	}
}