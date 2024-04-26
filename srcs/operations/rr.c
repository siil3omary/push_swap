/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:15:49 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/26 09:19:13 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	rr(s_stack **a, s_stack **b)
{
	s_stack	*firstb;
	s_stack	*secendb;
	s_stack	*firsta;
	s_stack	*secenda;

	firstb = *b;
	secendb = firstb->next;
	while (secendb->next)
		secendb = secendb->next;
	secendb->next = firstb;
	*b = firstb->next;
	firstb->next = NULL;
	firsta = *a;
	secenda = firsta->next;
	while (secenda->next)
		secenda = secenda->next;
	secenda->next = firsta;
	*a = firsta->next;
	firsta->next = NULL;
	write(1, "rr\n", 3);
}
