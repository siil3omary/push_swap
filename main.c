/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:46:46 by aelomari          #+#    #+#             */
/*   Updated: 2024/01/28 16:25:46 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

t_stack	*stack_init(t_stack **stack, char **av)
{
	int		i;
	t_stack	*head;
	t_stack	*nodes;

	nodes = NULL;
	head = NULL;
	i = 0;
    while(av[i])
    i++;

	while ( i >=  0)
	{
		nodes = ft_stacknew(ft_atoi(av[i]));
		if (!head)
			head = nodes;
		else
			ft_stackadd_back(&head, nodes);
		i++;
	}
	return (head);
}

#include "includes/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
    t_stack *tmp;

	a = NULL;
	t_stack *b = NULL; // Initialize b to NULL
	check_arg(ac, av);
	a = stack_init(&a, av);
    tmp = a;
	while (tmp->next != NULL)
	{
		printf("%d\n", tmp->data);
		tmp = tmp->next;
	}
	ft_stackclear(&a, free);
	// ft_stackclear(&b, free);
	a = NULL;
	// b = NULL;
	system("leaks push_swap");
	return (0);
}
