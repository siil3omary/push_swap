/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:29:21 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/02 14:02:47 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	sa(t_stack **a)
{
	t_stack	*first;
	t_stack	*secend;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	first = *a;
	secend = first->next;
	*a = secend;
	first->next = secend->next;
	secend->next = first;
	write(1, "sa\n", 3);
}
