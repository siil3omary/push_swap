/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:03:22 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/27 13:22:59 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushswap.h"

void	pb(s_stack **a, s_stack **b)
{
	s_stack	*removeda;

	if (*a == NULL)
		return ;
	removeda = *a;
	*a = (*a)->next;
	ft_stackadd_front(b, ft_stacknew(removeda->val, removeda->index));
	write(1, "pb\n", 3);
}
