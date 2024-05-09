/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:11:06 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/02 13:56:47 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sortfour(t_var *var)
{
	int		min;
	t_stack	*tmp;

	if (issorted(var->head_a))
		return ;
	min = search_min(var);
	tmp = var->head_a;
	if (min == tmp->val)
	{
		pb(&var->head_a, &var->head_b);
		sorttree(var);
		pa(&var->head_a, &var->head_b);
	}
	else if (min == tmp->next->val)
	{
		sa(&var->head_a);
		if (issorted(var->head_a))
			return ;
		pb(&var->head_a, &var->head_b);
		sorttree(var);
		pa(&var->head_a, &var->head_b);
	}
	else if (min == tmp->next->next->val)
	{
		rra(&var->head_a);
		rra(&var->head_a);
		if (issorted(var->head_a))
			return ;
		pb(&var->head_a, &var->head_b);
		sorttree(var);
		pa(&var->head_a, &var->head_b);
	}
	else
	{
		rra(&var->head_a);
		if (issorted(var->head_a))
			return ;
		pb(&var->head_a, &var->head_b);
		sorttree(var);
		pa(&var->head_a, &var->head_b);
	}
}
