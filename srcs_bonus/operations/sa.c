/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:29:21 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/11 13:17:14 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
}
