/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:46:46 by aelomari          #+#    #+#             */
/*   Updated: 2024/01/28 11:34:44 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

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

void stack_init(t_stack **stack, char **av)
{
    int i;
t_stack *tmp = NULL;
t_stack *head = NULL;


    i = 1;
    while (av[i])
    {
        tmp = malloc(sizeof(t_stack));
        tmp->data = ft_atoi(av[i]);
        tmp->next = head;
        head = tmp;
        i++;
    }

    *stack = head;
}


#include "includes/push_swap.h"

int main(int ac, char **av)
{
    t_stack *a = NULL;
    t_stack *b = NULL; // Initialize b to NULL

    check_arg(ac, av);

    stack_init(&a, av);

    while (a)
    {
        printf("%d\n", a->data);
        a = a->next;
    }

ft_stackclear(&a, free);
ft_stackclear(&b, free);

a = NULL;
b = NULL;




    system("leaks push_swap");

    return 0;
}
