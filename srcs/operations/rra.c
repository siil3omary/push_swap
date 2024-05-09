/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 09:21:37 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/02 13:59:14 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	rra(t_stack **a)
{
	t_stack	*temp2;
	t_stack	*temp;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	temp = *a;
	while (temp->next->next)
		temp = temp->next;
	temp2 = temp->next;
	temp->next = NULL;
	temp2->next = *a;
	*a = temp2;
	write(1, "rra\n", 4);
}
