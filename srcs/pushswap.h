/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:51:46 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/28 14:56:07 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PUSHSWAP_H)
# define PUSHSWAP_H

# include "lib/libft.h"
# include <stdio.h>
# include <unistd.h>

typedef struct t_stack
{
	int				val;
	int				index;
	struct t_stack	*next;
}					s_stack;

typedef struct var
{
	char			*avs;
	char			**args;
	int				size;
	int				*arr;
	struct t_stack	*head_a;
	struct t_stack	*head_b;

}					s_var;

int in_stack(s_stack *stack, int piv);
void				sorttree(s_var *var);
void				sortfour(s_var *var);
void				sortfive(s_var *var);
void				errornl(void);
int					issorted(s_stack *stack);
int					get_size(s_stack *stack);
void				send_to_b(s_var *var);
void send_to_a(s_var *var);
int	search_max(s_var *var);
void				sortit(s_var *var);
void				pb(s_stack **a, s_stack **b);
void				pa(s_stack **a, s_stack **b);
void				sa(s_stack **a);
void				sb(s_stack **b);
void				ss(s_stack **a, s_stack **b);
void				ra(s_stack **a);
void				rb(s_stack **b);
void				rr(s_stack **a, s_stack **b);
void				ft_stackadd_back(s_stack **lst, s_stack *new);
void				ft_stackadd_front(s_stack **lst, s_stack *new);
void				rra(s_stack **a);
void				rrb(s_stack **b);
void				rrr(s_stack **a, s_stack **b);
void				ft_stackclear(s_stack **lst);
s_stack				*ft_stacknew(int val, int index);
int					ft_stacksize(s_stack *lst);
#endif // PUSHSWAP_H
