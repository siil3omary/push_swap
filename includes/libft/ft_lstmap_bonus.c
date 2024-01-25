/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:14:53 by aelomari          #+#    #+#             */
/*   Updated: 2024/01/01 20:23:32 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;
	t_list	*head;
	void	*content;

	head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		l = ft_lstnew(content);
		if (!l)
		{
			ft_lstclear(&head, del);
			free(content);
			return (NULL);
		}
		ft_lstadd_back(&head, l);
		lst = lst->next;
	}
	return (head);
}
