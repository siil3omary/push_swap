/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:15:04 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/27 17:02:25 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// void zaza(void *data){
// 	char *str = (char *)data;
// 	int i = 0;
// 	while (str[i])
// 	{
// 		str[i] = ft_toupper(str[i]);
// 		i++;
// 	}

// }
// int main()
// {

// t_list *head = NULL;

// t_list *node1 = (t_list *)malloc(sizeof(t_list));
// t_list *node2 = (t_list *)malloc(sizeof(t_list));
// t_list *node3 = (t_list *)malloc(sizeof(t_list));
// t_list *node4 = (t_list *)malloc(sizeof(t_list));

// head = node1;

// node1->content = ft_strdup("slm");
// node1->next = node2;

// node2->content = ft_strdup("cv");
// node2->next = node3;

// node3->content = ft_strdup("hi");
// node3->next =node4;

// node4->content= ft_strdup("Hru");
// node4->next = NULL;

// ft_lstiter(head, &zaza);

//     t_list *current = head;
//     while (current != NULL) {
//         printf("%s\n", (char *)(current->content));
//         current = current->next;
//     }

// }