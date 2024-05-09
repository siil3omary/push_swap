/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:03:22 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/09 16:55:22 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*removeda;

	if (*a == NULL)
		return ;
	removeda = *a;
	*a = (*a)->next;
	ft_stackaddfront(b, ft_stacknew(removeda->val));

}
