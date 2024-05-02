/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:00:24 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/02 23:27:16 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(CHECKER_BONUS)
# define CHECKER_BONUS

# include "lib/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				val;
	int				index;
	struct s_stack	*next;
}					t_stack;

typedef struct t_var
{
	char			**args;
	char			*avs;
    t_stack *stack_a;
    t_stack *stack_b;
}					s_var;

void				errornl(void);

#endif // CHECKER_BONUS
