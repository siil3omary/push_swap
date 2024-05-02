/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 23:28:08 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/02 23:38:40 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

t_stack	*ft_stacknew(int val)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->val = val;
	node->next = NULL;
	return (node);
}

void	ft_stackaddback(t_stack **head, t_stack *node)
{
	if (!head || !node)
		return ;
	if (!*head)
	{
        head = node;
	}
	t_stack *tmp;
	while (tmp)
	{
		tmp = tmp->next;
	}
	tmp->next = node;
}