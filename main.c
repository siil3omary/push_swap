/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:46:46 by aelomari          #+#    #+#             */
/*   Updated: 2024/02/14 12:16:27 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	is_a_sorted(t_stack *a)
{
	t_stack	*tmp;

	tmp = a;
	while (tmp->next)
	{
		if (tmp->data < tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int ft_stacksize(t_stack *lst)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
void sort_three(t_stack **a)
{
	if ((*a)->data > (*a)->next->data && (*a)->next->data < (*a)->next->next->data)
		ft_putstr_fd("sa\n", 1);
	else if ((*a)->data > (*a)->next->data && (*a)->next->data > (*a)->next->next->data)
	{
		ft_putstr_fd("sa\n", 1);
		ft_putstr_fd("rra\n", 1);
	}
	else if ((*a)->data > (*a)->next->next->data && (*a)->next->data < (*a)->next->next->data)
		ft_putstr_fd("ra\n", 1);
	else if ((*a)->data > (*a)->next->next->data && (*a)->next->data > (*a)->next->next->data)
		ft_putstr_fd("rra\n", 1);
	else if ((*a)->data < (*a)->next->data && (*a)->next->data > (*a)->next->next->data)
		ft_putstr_fd("sa\nrra\n", 1);
}
void ft_putstr_fd (char *s, int fd)
{
	write(fd, s, strlen(s));
}
find_min(t_stack *a)
{
	t_stack	*tmp;
	int		min;

	tmp = a;
	min = INT_MAX;
	while (tmp)
	{
		if (tmp->data < min)
			min = tmp->data;
		tmp = tmp->next;
	}
	return (min);
}
find_max(t_stack *a)
{
	t_stack	*tmp;
	int		max;

	tmp = a;
	max = INT_MIN;
	while (tmp)
	{
		if (tmp->data > max)
			max = tmp->data;
		tmp = tmp->next;
	}
	return (max);
}
void sort_five(t_stack **a, t_stack **b)
{
	int		i;
	int		min;
	int		max;
	int		size;

	i = 0;
	size = ft_stacksize(*a);
	min = find_min(*a);
	max = find_max(*a);
	while (i < size - 3)
	{
		if ((*a)->data == min || (*a)->data == max)
		{
			ft_putstr_fd("pb\n", 1);
			ft_putstr_fd("ra\n", 1);
		}
		else
			ft_putstr_fd("ra\n", 1);
		i++;
	}
	sort_three(a);
	while (*b)
	{
		if ((*b)->data == min)
		{
			ft_putstr_fd("pa\n", 1);
			ft_putstr_fd("ra\n", 1);
		}
		else
			ft_putstr_fd("pa\n", 1);
	}
}

void sort_hundred(t_stack **a, t_stack **b)
{
	int		i;
	int		min;
	int		max;
	int		size;

	i = 0;
	size = ft_stacksize(*a);
	min = find_min(*a);
	max = find_max(*a);
	while (i < size - 3)
	{
		if ((*a)->data == min || (*a)->data == max)
		{
			ft_putstr_fd("pb\n", 1);
			ft_putstr_fd("ra\n", 1);
		}
		else
			ft_putstr_fd("ra\n", 1);
		i++;
	}
	sort_three(a);
	while (*b)
	{
		if ((*b)->data == min)
		{
			ft_putstr_fd("pa\n", 1);
			ft_putstr_fd("ra\n", 1);
		}
		else
			ft_putstr_fd("pa\n", 1);
	}
}

void	sortit(t_stack **a, t_stack **b)
{
	if(ft_stacksize(*a) == 2)
	{
		if ((*a)->data > (*a)->next->data)
			ft_putstr_fd("sa\n", 1);
	}
	else if (ft_stacksize(*a) == 3)
		sort_three(a);
	else if (ft_stacksize(*a) <= 5)
		sort_five(a, b);
	else
		sort_hundred(a, b);
}

void	free_all(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		free(av[i]);
		i++;
	}
	free(av);
}
int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*tmp;
	t_stack	*b;

	a = NULL;
	b = NULL;
	av = check_arg(ac, av);
	a = stack_init(&a, av);
	tmp = a;
	if (!is_a_sorted(a))
		sortit(&a, &b);
	ft_stackclear(&a, free);
	// ft_stackclear(&b, free);
	a = NULL;
	// b = NULL;
	if (ac == 2)
		free_all(av);
	system("leaks push_swap");
	return (0);
}
