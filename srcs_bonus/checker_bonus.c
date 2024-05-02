/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:59:57 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/02 23:27:42 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	errornl(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}
void	joinargs(int ac, char **av, s_var *var)
{
	int		i;
	char	*tmp;
	char	*args;

	args = NULL;
	var->avs = NULL;
	i = 1;
	while (i <= ac - 1)
	{
		tmp = ft_strjoin(av[i], " ");
		args = var->avs;
		var->avs = ft_strjoin(var->avs, tmp);
		if (args)
			free(args);
		free(tmp);
		i++;
	}
    var->args = ft_split(var->avs , ' ');
}
void initstack(s_var *var)
{
    var->stack_a = NULL;
    var->stack_b = NULL;
    
    
}
int	main(int ac, char **av)
{
	s_var *var;
	if (ac >= 2)
	{
		var = (s_var *)malloc(sizeof(s_var));
		joinargs(ac, av, var);
        initstack(var);
	}
        system("leaks a.out");
}