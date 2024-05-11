/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 21:09:25 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/11 13:17:08 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	sb(t_stack **b)
{
	t_stack	*first;
	t_stack	*secend;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	first = *b;
	secend = first->next;
	*b = secend;
	first->next = secend->next;
	secend->next = first;
}
