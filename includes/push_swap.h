/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:47:37 by aelomari          #+#    #+#             */
/*   Updated: 2024/02/14 12:14:09 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H



# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

// =====================  Structures  ===================== //
typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}					t_stack;

// =====================  Prototypes  ===================== //
t_stack				*stack_init(t_stack **stack, char **av);
t_stack				*ft_stacknew(int data);
void				ft_stackadd_back(t_stack **lst, t_stack *new);
void				ft_stackdelone(t_stack *lst, void (*del)(void *));
void				ft_stackclear(t_stack **lst, void (*del)(void *));
char				**check_arg(int ac, char **av);
void				ft_error(void);
long ft_atoi(const char *str);
void ft_putstr_fd (char *s, int fd);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_count_words(char const *s, char c);
long ft_atoi(const char *str);
long ft_strlen(const char *s);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strdup(const char *s1);
void free_array(char **array);

char **ft_split(char const *s, char c);
int ft_isdigit(int c);
void ft_putstr_fd (char *s, int fd);
int ft_stacksize(t_stack *lst);
int is_a_sorted(t_stack *a);
void sortthree(t_stack **a);
void sortfive(t_stack **a, t_stack **b);
void sortfour(t_stack **a, t_stack **b);
void sort_hundred(t_stack **a, t_stack **b);
void sort_five_hundred(t_stack **a, t_stack **b);
void sort_five_hundred(t_stack **a, t_stack **b);


#endif // PUSH_SWAP_H