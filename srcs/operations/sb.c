/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 21:09:25 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/25 21:25:22 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void sb(s_stack **b)
{
    if(*b == NULL || (*b)->next == NULL)
        return;
    s_stack *first;
    s_stack * secend;

    first = *b;
    secend = first->next;
    *b = secend;
    first->next =  secend->next;
    secend->next = first;
    write(1, "sb\n", 3);
}