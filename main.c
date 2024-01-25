#include "includes/push_swap.h"

int main(int ac, char **av)
{
    t_list a;
    t_list b;
    
    if (ac == 1)
        ft_printf("Error\n");
        else if (ac == 2 && av[1][0] == '\0')
              ft_printf("Error\n");
              else if(ac == 2)
              av = ft_split(av[1] , ' ');

              
    
    
}