/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 09:48:41 by aelomari          #+#    #+#             */
/*   Updated: 2024/01/14 10:46:39 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h> // Add the missing include statement

int	ft_print_p(unsigned long n)
{
	int					count;

	count = 0;
	count += ft_print_s("0x");
	count += ft_print_x(n);
	return (count);
}
