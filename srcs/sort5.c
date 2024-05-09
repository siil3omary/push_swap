/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:12:00 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/02 13:56:51 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sortfive(t_var *var)
{
	int		min;
	t_stack	*tmp;
	int		i;

	if (issorted(var->head_a))
		return ;
	min = search_min(var);
	tmp = var->head_a;
	i = 0;
	while (tmp->val != min)
	{
		tmp = tmp->next;
		i++;
	}
	if (i == 0)
	{
		pb(&var->head_a, &var->head_b);
		sortfour(var);
		pa(&var->head_a, &var->head_b);
	}
	else
	{
		if (i <= 2)
			while (i--)
				ra(&var->head_a);
		else
		{
			i = 5 - i;
			while (i--)
				rra(&var->head_a);
		}
		pb(&var->head_a, &var->head_b);
		sortfour(var);
		pa(&var->head_a, &var->head_b);
	}
}
