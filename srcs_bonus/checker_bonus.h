/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:00:24 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/11 16:42:12 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "gnl/get_next_line.h"
# include "lib/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				val;
	int				index;
	struct s_stack	*next;
}					t_stack;

typedef struct s_var
{
	char			**args;
	char			*avs;
	int				size;
	t_stack			*stack_a;
	t_stack			*stack_b;
}					t_var;

void				errornl(void);
void				ft_stackaddback(t_stack **head, t_stack *node);
t_stack				*ft_stacknew(int val);
void				ft_stackaddfront(t_stack **head, t_stack *node);
int					get_size(t_stack *stack);
int					issorted(t_stack *stack);
void				ss(t_stack **a, t_stack **b);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);

#endif