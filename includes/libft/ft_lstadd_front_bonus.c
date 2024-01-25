/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:00:53 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/26 13:14:13 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
	else
		return ;
}

// int main (){

// t_list *node1 = NULL;
// t_list *node2 = NULL;
// t_list *node3 = NULL;
// t_list *node4 = NULL;

// node1 = (t_list *)malloc(sizeof(t_list));

// node2 = (t_list *)malloc(sizeof(t_list));

// node3 = (t_list *)malloc(sizeof(t_list));

// node4 = (t_list *)malloc(sizeof(t_list));

// node1->content =ft_strdup("node1");
// node2->content =ft_strdup("node2");
// node3->content =ft_strdup("node3");
// node4->content =ft_strdup("node4");

// node1->next = node2;
// node2->next = node3;
// node3->next = NULL;

// ft_lstadd_front(&node1,node4);
// while(node4)
// {
// 	printf("%s \n",(char *)node4->content);
// 	node4= node4->next;
// }

// printf("OK");

// }
