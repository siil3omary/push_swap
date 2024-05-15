/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:50:30 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/15 16:14:52 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int ac, char **av)
{
	t_var	*var;

	if (ac >= 2)
	{
		var = (t_var *)malloc(sizeof(t_var));
		joinargs(av, ac, var);
		initstack(var);
		isdup(var->head_a, var);
		if (issorted(var->head_a))
		{
			free_stack(&var->head_a);
			free(var);
			exit(0);
		}
		indexstack(var);
		sortit(var);
		free(var);
	}
	return (0);
}
