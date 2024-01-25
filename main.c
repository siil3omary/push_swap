#include "includes/push_swap.h"

int main(int ac, char **av)
{
    t_list a;
    t_list b;
    int true;

    true = 0;

    if (ac == 1 )
        return (0);
        else if ((ac == 2 && av[1][0] == '\0'))
        {
        ft_printf("Error\n");
        return (0);
            
        }
        
              else if(ac == 2 ){
              av = ft_split(av[1] , ' ');
              true = 1;
              }
              else if (ac > 2)
              {
                  int i = 1;
                  while (i < ac)
                  {
                      if (av[i][0] == '\0')
                      {
                          ft_printf("Error\n");
                          return (0);
                      }
                      i++;
                  }
              }

int i = 0;
while (av[i] != NULL)
{
    ft_printf("%s\n" , av[i]);
    i++;
}
if(true == 1)
free_all(av);
av = NULL;




              
    
    system("leaks push_swap");
}