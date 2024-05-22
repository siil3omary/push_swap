/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 23:42:18 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/22 17:47:44 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	rb(t_stack **b)
{
	t_stack	*first;
	t_stack	*secend;

	if (!b || !(*b) || !((*b)->next))
		return ;
	first = *b;
	secend = first->next;
	while (secend->next)
		secend = secend->next;
	secend->next = first;
	*b = first->next;
	first->next = NULL;
}
