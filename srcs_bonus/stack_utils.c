/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 23:28:08 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/09 18:01:04 by aelomari         ###   ########.fr       */
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
	t_stack	*tmp;

	if (!head || !node)
		return ;
	if (!*head)
	{
		node->next = NULL;
		*head = node;
		return ;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		node->next = NULL;
		tmp->next = node;
	}
}

void	ft_stackaddfront(t_stack **head, t_stack *node)
{
	if (!head || !node)
		return ;
	node->next = *head;
	*head = node;
}
