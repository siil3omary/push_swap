/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 21:21:33 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/25 23:41:56 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void ra(s_stack **a)
{
    s_stack *first;
    s_stack *secend;

    first = *a;
    secend = first->next;
    
    while (secend->next)
        secend = secend->next; 

    secend->next = first;
    *a  = first->next;
    first->next = NULL;
    write(1, "ra\n", 3);
    
}

