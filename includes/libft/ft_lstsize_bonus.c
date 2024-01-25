/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:58:51 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/27 21:59:38 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// int main()
// {
// 	t_list *node3 = NULL;
// 	t_list *node1 = NULL;
// 	t_list *node2 = NULL;
// 	t_list *node4 = NULL;
// 	t_list *node5 = NULL;
// 	t_list *node6 = NULL;
// 	t_list *node7 = NULL;
// 	t_list *node8 = NULL;
// 	t_list *node9 = NULL;
// 	t_list *node10 = NULL;

// 	node1 = (t_list *)malloc(sizeof(t_list));
// 	node2 = (t_list *)malloc(sizeof(t_list));
// 	node3 = (t_list *)malloc(sizeof(t_list));
// 	node4 = (t_list *)malloc(sizeof(t_list));
// 	node5 = (t_list *)malloc(sizeof(t_list));
// 	node6 = (t_list *)malloc(sizeof(t_list));
// 	node7 = (t_list *)malloc(sizeof(t_list));
// 	node8 = (t_list *)malloc(sizeof(t_list));
// 	node9 = (t_list *)malloc(sizeof(t_list));
// 	node10 = (t_list *)malloc(sizeof(t_list));

// 	node1->next = node2;
// 	node1->content = ft_strdup("hello");

// 	node2->next = node3;
// 	node2->content = ft_strdup("hello");

// 	node3->next = node4;
// 	node3->content = ft_strdup("hello");

// 	node4->next = node5;
// 	node4->content = ft_strdup("hello");

// 	node5->next = node6;
// 	node6->next = node7;
// 	node7->next = node8;
// 	node8->next = node9;
// 	node9->next = node10;
// 	node10->next = NULL;

// 		printf("ok %d" , ft_lstsize(node1));
// }