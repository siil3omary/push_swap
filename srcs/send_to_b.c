/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 10:54:22 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/27 14:40:21 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	calcul_piv(int *rem, int *pivot_1, int *pivot_2, s_stack *a)
{
	*rem = *pivot_1;
	*pivot_2 =  *pivot_1 + get_size(a) / 6 ;
	*pivot_1 += (get_size(a) / 3);
}

// int in_stack(s_stack *stack, int piv)
// {
// 	s_stack *tmp;
// 	while (tmp)
// 	{
		
// 		tmp = tmp->next;
// 	}
	
// }
void	send_to_b(s_var *var)
{
	s_stack *a;
	s_stack *b;
	int pivot_1;
	int pivot_2;
	int rem;
	a = var->head_a;
	b = var->head_b;
	rem = -1;
	pivot_1 = rem + get_size(a) /6;
	pivot_2 = (get_size(a) / 3);

	while (get_size(a) >= 3)
	{
		
	}
}