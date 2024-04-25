/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 21:17:23 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/25 21:25:05 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void ss(s_stack **a , s_stack **b)
{
        if((*b == NULL || (*b)->next == NULL) || (*a == NULL || (*a)->next == NULL))
        return;
    s_stack *firstb;
    s_stack *firsta;
    s_stack * secendb;
    s_stack * secenda;

    firstb = *b;
    secendb = firstb->next;
    *b = secendb;
    firstb->next =  secendb->next;
    secendb->next = firstb;
    firsta = *a;
    secenda = firsta->next;
    *a = secenda;
    firsta->next = secenda->next;
    secenda->next = firsta;
    write(1, "ss\n", 3);
}
