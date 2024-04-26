/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:46:12 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/26 10:29:13 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	rrr(s_stack **a, s_stack **b)
{
	s_stack	*temp2a;
	s_stack	*tempa;
	s_stack	*temp2b;
	s_stack	*tempb;

	if ((*a == NULL || (*a)->next == NULL) || (*b == NULL
			|| (*b)->next == NULL))
		return ;
	tempa = *a;
	while (tempa->next->next)
		tempa = tempa->next;
	temp2a = tempa->next;
	tempa->next = NULL;
	temp2a->next = *a;
	*a = temp2a;
	tempb = *b;
	while (tempb->next->next)
		tempb = tempb->next;
	temp2b = tempb->next;
	tempb->next = NULL;
	temp2b->next = *b;
	*b = temp2b;
	write(1, "rrr\n", 4);
}
