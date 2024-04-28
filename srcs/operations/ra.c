/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 21:21:33 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/28 13:48:38 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void ra(s_stack **a)
{
    if (!a || !(*a) || !((*a)->next))
        return; // No rotation needed if the stack is empty or has only one element

    s_stack *first = *a;
    s_stack *second = first->next;

    // Find the last element
    while (second->next)
        second = second->next;

    // Perform rotation
    second->next = first;
    *a = second->next->next;
    first->next = NULL;

    // Output
    write(1, "ra\n", 3);
}


