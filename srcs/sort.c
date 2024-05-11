/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:13:45 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/11 14:08:07 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
void free_stack(t_stack **stack)
{
    t_stack *tmp;

    while (*stack)
    {
        tmp = (*stack)->next;
        free(*stack);
        *stack = tmp;
    }
}

void	sortit(t_var *var)
{
	if (var->size == 2)
		sa(&var->head_a);
	else if (var->size == 3)
		sorttree(var); 
	else if (var->size == 4)
		sortfour(var);
	else if (var->size == 5)
		sortfive(var);
	else
	{
		send_to_b(var);
		send_to_a(var);
	}
	free_stack(&var->head_a);
	free_stack(&var->head_b);
}
