/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:53:21 by aelomari          #+#    #+#             */
/*   Updated: 2024/01/28 15:53:22 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
void	ft_error(void)
{
	write(2, "Error\n", 6);
	system("leaks push_swap");
	exit(1);
}

static int	isduplicate(long num, char **args, int i)
{
	i++;
	while (args[i])
	{
		if (ft_atoi(args[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

static int	isnumber(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	check_arg(int ac, char **av)
{
	char	**args;
	long	tmp;
	int		i;

	if (ac < 2)
		exit(1);
	else if (ac == 2)
		args = ft_split(av[1], ' ');
	else
		args = av;
	i = 1;
	while (args[i])
	{
		tmp = ft_atoi(args[i]);
		if (!isnumber(args[i]) || isduplicate(tmp, args, i))
			ft_error();
		else if (tmp > INT_MAX || tmp < INT_MIN)
			ft_error();
		i++;
	}
	if (ac == 2)
		free_all(args);
}
