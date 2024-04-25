/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:58:52 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/25 21:37:04 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"
void    pa(s_stack **a, s_stack **b)
{
    if (*b == NULL)
        return;
        s_stack *removedb = *b;
        *b = (*b)->next;
        ft_stackadd_front(a, ft_stacknew(removedb->val));
        (*a)->size++;
        (*b)->size--;

    write(1, "pa\n", 3);
}