/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:46:46 by aelomari          #+#    #+#             */
/*   Updated: 2024/01/28 15:58:23 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"



void stack_init(t_stack **stack, char **av)
{
    int i;
    
    t_stack *nodes;
    t_stack *head;
    
    head = NULL;
    nodes = NULL;

    i = 0;

    while(av[i])
    {
        
        nodes = ft_stacknew(ft_atoi(av[i]));
        nodes = nodes->next;
        i++;
        
    }
}


#include "includes/push_swap.h"

int main(int ac, char **av)
{
    t_stack *a = NULL;
    t_stack *b = NULL; // Initialize b to NULL

    check_arg(ac, av);
    printf("Hello World\n");

    stack_init(&a, av);

    while (a)
    {
        printf("%d\n", a->data);
        a = a->next;
    }

// ft_stackclear(&a, free);
// ft_stackclear(&b, free);

a = NULL;
b = NULL;




    system("leaks push_swap");

    return 0;
}
