/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:09:29 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/02 13:56:44 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sorttree(t_var *var)
{
	if (issorted(var->head_a))
		return ;
	if ((var->head_a->val > var->head_a->next->val)
		&& var->head_a->next->next->val > var->head_a->val)
		sa(&var->head_a);
	else if (var->head_a->val > var->head_a->next->val
		&& var->head_a->val > var->head_a->next->next->val
		&& var->head_a->next->val > var->head_a->next->next->val)
	{
		sa(&var->head_a);
		rra(&var->head_a);
	}
	else if (var->head_a->val > var->head_a->next->val
		&& var->head_a->next->val < var->head_a->next->next->val)
		ra(&var->head_a);
	else if (var->head_a->next->val > var->head_a->val
		&& var->head_a->next->val > var->head_a->next->next->val
		&& var->head_a->val < var->head_a->next->next->val)
	{
		sa(&var->head_a);
		ra(&var->head_a);
	}
	else
		rra(&var->head_a);
}
