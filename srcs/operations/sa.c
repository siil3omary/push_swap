/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:29:21 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/26 09:02:30 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	sa(s_stack **a)
{
	if (*a == NULL || (*a)->next == NULL)
		return ;
	s_stack *first;
	s_stack *secend;

	first = *a;
	secend = first->next;
	*a = secend;
	first->next = secend->next;
	secend->next = first;
	write(1, "sa\n", 3);
}