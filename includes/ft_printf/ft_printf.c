/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 09:41:39 by aelomari          #+#    #+#             */
/*   Updated: 2024/01/14 09:47:42 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	ft_printit(int i, const char *format, va_list ap)
{
	int	count;

	count = 0;
	if (format[i] == 'c')
		count += ft_print_c(va_arg(ap, int));
	else if (format[i] == 's')
		count += ft_print_s(va_arg(ap, char *));
	else if (format[i] == 'p')
		count += ft_print_p(va_arg(ap, unsigned long));
	else if (format[i] == 'd' || format[i] == 'i')
		count += ft_print_d(va_arg(ap, int));
	else if (format[i] == 'u')
		count += ft_print_u(va_arg(ap, unsigned int));
	else if (format[i] == 'x')
		count += ft_print_x(va_arg(ap, unsigned int));
	else if (format[i] == 'X')
		count += ft_print_xx(va_arg(ap, unsigned int));
	else if (format[i] == '%')
		count += ft_print_c('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (ft_strchr("cspdiuxX%", format[i + 1]))
			{
				count += ft_printit(++i, format, ap);
			}
		}
		else
			count += ft_print_c(format[i]);
		i++;
	}
	return (count);
}
