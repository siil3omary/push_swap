/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:58:52 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/11 13:17:58 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*removedb;

	if (*b == NULL)
		return ;
	removedb = *b;
	*b = (*b)->next;
	ft_stackaddfront(a, ft_stacknew(removedb->val));
}
