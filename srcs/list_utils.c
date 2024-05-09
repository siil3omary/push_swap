/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:07:16 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/08 22:03:00 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	fs_stacadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*temp;

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

t_stack	*fs_stacnew(int val, int index)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (new == NULL)
		return (NULL);
	new->val = val;
	new->index = index;
	new->next = NULL;
	return (new);
}

void	fs_stacadd_front(t_stack **lst, t_stack *new)
{
	if (lst == NULL || new == NULL)
	{
		return ;
	}
	new->next = *lst;
	*lst = new;
}

void	fs_stacclear(t_stack **lst)
{
	t_stack	*temp;

	if (lst == NULL)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		free(*lst);
		*lst = temp;
	}
}

int	fs_stacsize(t_stack *lst)
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
