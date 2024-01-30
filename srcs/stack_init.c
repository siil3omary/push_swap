/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:49:34 by aelomari          #+#    #+#             */
/*   Updated: 2024/01/30 17:40:09 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*stack_init(t_stack **stack, char **av)
{
	int		i;
	t_stack	*head;
	t_stack	*nodes;

	nodes = NULL;
	head = NULL;
	i = 1;
	while (av[i])
		i++;
	i--;
	while (i > 0)
	{
		nodes = ft_stacknew(ft_atoi(av[i]));
		if (!head)
			head = nodes;
		else
			ft_stackadd_back(&head, nodes);
		i--;
	}
	return (head);
}
