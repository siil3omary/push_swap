/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:15:49 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/11 13:17:37 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	rr(t_stack **a, t_stack **b)
{
	t_stack	*firstb;
	t_stack	*secendb;
	t_stack	*firsta;
	t_stack	*secenda;

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
}
