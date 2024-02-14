/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:47:37 by aelomari          #+#    #+#             */
/*   Updated: 2024/02/14 14:50:45 by aelomari         ###   ########.fr       */
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
size_t  ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s);
char	**ft_split(char const *s, char c);
int	ft_isdigit(int c);
int	ft_atoi(const char *nptr);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

#endif // PUSH_SWAP_H