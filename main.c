#include "includes/push_swap.h"

int	main(int ac, char **av)
{
	if (ac == 2)
		av = ft_split(av[1], ' ');
	else if (ac == 1 || (ac == 2 && av[1][0] == '\0'))
	{
		ft_printf("Error\n");
		return (0);
	}
}