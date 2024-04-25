/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:51:46 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/25 21:38:42 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PUSHSWAP_H)
#define PUSHSWAP_H

#include <unistd.h>
#include <stdio.h>
#include "lib/libft.h"

typedef struct t_stack
{
    int val;
    int size;
    struct t_stack *next;
} s_stack;

typedef struct var
{
    char *avs;
    char **args;
    struct t_stack *head_a;
    struct t_stack *head_b;
    
} s_var;
void    errornl(void);
void    pb(s_stack **a, s_stack **b);
void    pa(s_stack **a, s_stack **b);
void    sa(s_stack **a);
void	ft_stackadd_back(s_stack **lst, s_stack *new);
void    ft_stackadd_front(s_stack **lst, s_stack *new);
void    ft_stackclear(s_stack **lst);
s_stack    *ft_stacknew(int content);
int     ft_stacksize(s_stack *lst);
#endif // PUSHSWAP_H
