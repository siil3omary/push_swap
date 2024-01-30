/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:46:46 by aelomari          #+#    #+#             */
/*   Updated: 2024/01/28 17:19:56 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "includes/push_swap.h"
int is_a_sorted( t_stack *a)
{
    t_stack *tmp;
    tmp = a;
    while(tmp->next)
    {
        if(tmp->data > tmp->next->data)
            return 0;
        tmp = tmp->next;
    }
    return 1;
}
void sortit(t_stack **a, t_stack **b)
{
}

int	main(int ac, char **av)
{
	t_stack	*a;
    t_stack *tmp;

	a = NULL;
	t_stack *b = NULL; // Initialize b to NULL
	av = check_arg(ac, av);
	a = stack_init(&a, av);
    tmp = a;
    if(!is_a_sorted(a))
    sortit(&a, &b);
	ft_stackclear(&a, free);
	// ft_stackclear(&b, free);
	a = NULL;
	// b = NULL;
    if(ac == 2)
    free_all(av);
	system("leaks push_swap");
	return (0);
}
