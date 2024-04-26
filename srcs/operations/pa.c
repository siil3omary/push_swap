/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:58:52 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/26 09:06:00 by aelomari         ###   ########.fr       */
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
	ft_stackadd_front(a, ft_stacknew(removedb->val));
	write(1, "pa\n", 3);
}