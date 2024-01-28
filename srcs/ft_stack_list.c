/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 11:55:15 by aelomari          #+#    #+#             */
/*   Updated: 2024/01/28 15:54:02 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_stackadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*temp;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
}

void	ft_stackclear(t_stack **stack, void (*del)(void *))
{
	t_stack	*current;
	t_stack	*next;

	if (!stack || !del)
		return ;
	current = *stack;
	while (current)
	{
		next = current->next;
		ft_stackdelone(current, del);
		current = next;
	}
	*stack = NULL;
}
void ft_stackdelone(t_stack *stack, void (*del)(void *))
{
    if (!stack || !del)
        return;
    (del)((void *)(intptr_t)stack->data);
    free(stack);
}
t_stack	*ft_stacknew(int data)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (new == NULL)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}