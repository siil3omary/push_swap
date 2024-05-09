/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:31:53 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/02 13:58:31 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	rrb(t_stack **b)
{
	t_stack	*temp2;
	t_stack	*temp;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	temp = *b;
	while (temp->next->next)
		temp = temp->next;
	temp2 = temp->next;
	temp->next = NULL;
	temp2->next = *b;
	*b = temp2;
	write(1, "rrb\n", 4);
}
