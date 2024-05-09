/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:13:45 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/02 14:00:39 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sortit(t_var *var)
{
	if (var->size == 2)
		sa(&var->head_a);
	else if (var->size == 3)
		sorttree(var);
	else if (var->size == 4)
		sortfour(var);
	else if (var->size == 5)
		sortfive(var);
	else
	{
		send_to_b(var);
		send_to_a(var);
	}
}
