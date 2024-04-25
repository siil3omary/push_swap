/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:07:16 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/25 22:46:07 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_stackadd_back(s_stack **lst, s_stack *new)
{
	s_stack	*temp;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
	else
	{
		temp = *lst;
		while (temp->next != NULL)
			temp = temp->next;
		new->next = NULL;
		temp->next = new;
	}
}

s_stack	*ft_stacknew(int val)
{
	s_stack	*new;

	new = (s_stack *)malloc(sizeof(s_stack));
	if (new == NULL)
		return (NULL);
	new->val = val;
	new->next = NULL;
	return (new);
}

void	ft_stackadd_front(s_stack **lst, s_stack *new)
{
	if (lst == NULL || new == NULL)
	{
		return ;
	}
	new->next = *lst;
	*lst = new;
}

void	ft_stackclear(s_stack **lst)
{
	s_stack	*temp;

	if (lst == NULL)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		free(*lst);
		*lst = temp;
	}
}

int	ft_stacksize(s_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
