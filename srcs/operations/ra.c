/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 21:21:33 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/02 13:58:52 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	ra(t_stack **a)
{
	t_stack	*first;
	t_stack	*second;

	if (!a || !(*a) || !((*a)->next))
		return ;
	first = *a;
	second = first->next;
	while (second->next)
		second = second->next;
	second->next = first;
	*a = second->next->next;
	first->next = NULL;
	write(1, "ra\n", 3);
}
