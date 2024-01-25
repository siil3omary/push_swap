/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:09:09 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/27 16:58:33 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

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

// int main(){

// t_list *node1;
// node1 = NULL;
// node1 = (t_list *)malloc(sizeof(t_list));

// t_list *node2;
// node2 = NULL;
// node2 = (t_list *)malloc(sizeof(t_list));

// t_list *node3;
// node3 = NULL;
// node3 = (t_list *)malloc(sizeof(t_list));

// t_list *node4;
// node4 = NULL;
// node4 = (t_list *)malloc(sizeof(t_list));

// node1->next = node2;
// node2->next = node3;
// node3->next = NULL;
// node4->next = NULL;

// node1->content = ft_strdup("A");
// node2->content = ft_strdup("B");
// node3->content = ft_strdup("C");
// node4->content = ft_strdup("D");

// ft_lstadd_back(&node1 , node4);
// while (node1)
// {
// 	printf("%s \n", (char *)node1->content);
// 	node1 = node1->next;
// }

// }