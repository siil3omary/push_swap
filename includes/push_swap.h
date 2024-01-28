/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:47:37 by aelomari          #+#    #+#             */
/*   Updated: 2024/01/28 16:19:36 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "my_ft_printf/includes/ft_printf.h"
# include "my_libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// =====================  Structures  ===================== //
typedef struct s_stack
{
    int				data;
    struct s_stack	*next;
}					t_stack;

// =====================  Prototypes  ===================== //
t_stack	*ft_stacknew(int data);
void	ft_stackadd_back(t_stack **lst, t_stack *new);
void	ft_stackdelone(t_stack *lst, void (*del)(void *));
void	ft_stackclear(t_stack **lst, void (*del)(void *));
void	check_arg(int ac, char **av);
void	ft_error(void);


#endif // PUSH_SWAP_H