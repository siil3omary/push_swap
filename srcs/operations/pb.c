/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:03:22 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/02 13:59:01 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*removeda;

	if (*a == NULL)
		return ;
	removeda = *a;
	*a = (*a)->next;
	fs_stacadd_front(b, fs_stacnew(removeda->val, removeda->index));
	write(1, "pb\n", 3);
}
