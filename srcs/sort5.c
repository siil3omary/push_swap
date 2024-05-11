/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:12:00 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/11 16:10:14 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sortfive2(t_var *var, int min, t_stack *tmp)
{
	if (min == tmp->next->next->val)
	{
		rra(&var->head_a);
		rra(&var->head_a);
		rra(&var->head_a);
	}
	else if (min == tmp->next->next->next->val)
	{
		rra(&var->head_a);
		rra(&var->head_a);
	}
	else if (min == tmp->next->next->next->next->val)
		rra(&var->head_a);
	if (issorted(var->head_a))
		return ;
	pb(&var->head_a, &var->head_b);
	sortfour(var);
	pa(&var->head_a, &var->head_b);
}

void	sortfive(t_var *var)
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
		sortfour(var);
		pa(&var->head_a, &var->head_b);
	}
	else if (min == tmp->next->val)
	{
		sa(&var->head_a);
		if (issorted(var->head_a))
			return ;
		pb(&var->head_a, &var->head_b);
		sortfour(var);
		pa(&var->head_a, &var->head_b);
	}
	else if (min == tmp->next->next->val || min == tmp->next->next->next->val
		|| min == tmp->next->next->next->next->val)
		sortfive2(var, min, tmp);
}
