/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 21:17:23 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/02 13:58:07 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	ss(t_stack **a, t_stack **b)
{
	t_stack	*firstb;
	t_stack	*firsta;
	t_stack	*secendb;
	t_stack	*secenda;

	if ((*b == NULL || (*b)->next == NULL) || (*a == NULL
			|| (*a)->next == NULL))
		return ;
	firstb = *b;
	secendb = firstb->next;
	*b = secendb;
	firstb->next = secendb->next;
	secendb->next = firstb;
	firsta = *a;
	secenda = firsta->next;
	*a = secenda;
	firsta->next = secenda->next;
	secenda->next = firsta;
	write(1, "ss\n", 3);
}
