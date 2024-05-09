/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:18:27 by aelomari          #+#    #+#             */
/*   Updated: 2024/05/08 21:56:59 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
#include "../lib/libft.h"
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif
# ifndef SIZE_MAX
#  define SIZE_MAX 18446744073709551615UL
# endif // SIZE_MAX
# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif

char	*get_next_line(int fd);
size_t	isnewline(char *buf);

#endif // GET_NEXT_LINE_H
