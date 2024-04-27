/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:58:52 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/27 13:22:29 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	pa(s_stack **a, s_stack **b)
{
	s_stack *removedb;

	if (*b == NULL)
		return ;
	removedb = *b;
	*b = (*b)->next;
	ft_stackadd_front(a, ft_stacknew(removedb->val, removedb->index));
	write(1, "pa\n", 3);
}