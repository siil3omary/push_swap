/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 21:21:33 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/09 18:29:37 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	ra(t_stack **a)
{
	t_stack	*first;
	t_stack	*secend;

	first = *a;
	secend = first->next;
	while (secend->next)
		secend = secend->next;
	secend->next = first;
	*a = first->next;
	first->next = NULL;
	write(1, "ra\n", 3);
}
