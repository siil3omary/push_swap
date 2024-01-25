/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 22:02:53 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/26 13:15:03 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//        #include <fcntl.h>
// int main(){
// 	int fd = open("t.txt" , O_RDWR);
// 	ft_putchar_fd('0', fd);
// 	return (0);
// }