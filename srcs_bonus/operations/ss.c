/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 21:17:23 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/09 14:34:21 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	ss(t_stack **a, t_stack **b)
{
	t_stack	*firsta;
	t_stack	*firstb;
	t_stack	*secenda;
	t_stack	*secendb;

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

}
