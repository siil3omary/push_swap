/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:21:37 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/26 09:53:44 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"
void rra(s_stack **a)
{
    s_stack	*temp2;
    s_stack	*temp;

    if (*a == NULL || (*a)->next == NULL)
        return ;
    temp = *a;
    while (temp->next->next)
        temp = temp->next;
    temp2 = temp->next; 
    temp->next = NULL;
    temp2->next = *a;
    *a = temp2;
    write(1, "rra\n", 4);
}
