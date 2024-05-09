/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:58:52 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/02 14:02:02 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*removedb;

	if (*b == NULL)
		return ;
	removedb = *b;
	*b = (*b)->next;
	fs_stacadd_front(a, fs_stacnew(removedb->val, removedb->index));
	write(1, "pa\n", 3);
}
