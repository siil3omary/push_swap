/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:46:46 by aelomari          #+#    #+#             */
/*   Updated: 2024/02/14 15:32:04 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

char **joinit(char **s1 , char **s2){
	int i;
	int j;
	char **result;
	i = 0;
	j = 0;
	
	while (s1[i] != NULL)
		i++;
	while (s2[j] != NULL)
		j++;	
result = (char **)malloc(i + j * sizeof(char**));
i = 0;
j = 0;
while (s1[i] != NULL)
{
	result[i] = s1[i];
	i++;
}
while (s2[j] != NULL)
{
	result[i] = s2[j];
	j++;
	i++;
}
return (result);

	
	
}
void check_args(int ac, char** av){
	int i;
	char **avs;
	char **args;
	
	if (ac == 1)
	exit(0);
	i = 1;
while (ac > i)
{
	avs = ft_split(av[i], ' ');
	args = joinit(args , avs);
	i++;
	
}


}

int	main(int ac, char **av)
{
	check_args(ac, av);
	
}
