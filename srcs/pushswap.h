/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:51:46 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/02 13:56:15 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PUSHSWAP_H)
# define PUSHSWAP_H

# include "lib/libft.h"
# include <stdio.h>
# include <unistd.h>

typedef struct s_stack
{
	int				val;
	int				index;
	struct s_stack	*next;
}					t_stack;

typedef struct s_var
{
	char			*avs;
	char			**args;
	int				size;
	int				*arr;
	struct s_stack	*head_a;
	struct s_stack	*head_b;

}					t_var;

int					in_stack(t_stack *stack, int piv);
void				sortit(t_var *var);
void				sorttree(t_var *var);
void				sortfour(t_var *var);
void				sortfive(t_var *var);
void				joinargs(char **av, int ac, t_var *var);
void				initstack(t_var *var);
void	isdup(t_stack *stack , t_var *var);
void	free_stack(t_stack **stack);
void				errornl(t_var *var);
int					issorted(t_stack *stack);
int					get_size(t_stack *stack);
void				indexstack(t_var *var);
void				send_to_b(t_var *var);
void				bubblesort(t_var *var);
void				send_to_a(t_var *var);
int					search_min(t_var *var);
int					search_max(t_var *var);
int					issorted(t_stack *stack);
void				indexit(t_var *var);
void				swap(int *a, int *b);
void				sortit(t_var *var);
void				pb(t_stack **a, t_stack **b);
void				pa(t_stack **a, t_stack **b);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				fs_stacadd_back(t_stack **lst, t_stack *new);
void				fs_stacadd_front(t_stack **lst, t_stack *new);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);
void				fs_stacclear(t_stack **lst);
t_stack				*fs_stacnew(int val, int index);
int					fs_stacsize(t_stack *lst);
#endif // PUSHSWAP_H
