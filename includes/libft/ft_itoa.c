/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:26:08 by aelomari          #+#    #+#             */
/*   Updated: 2024/01/01 20:22:16 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_int(long long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*zero(void)
{
	char	*zr;

	zr = (char *)malloc(2 * sizeof(char));
	if (zr == NULL)
	{
		return (NULL);
	}
	zr[0] = '0';
	zr[1] = '\0';
	return (zr);
}

char	*ft_itoa(int n)
{
	char		*rslt;
	long long	num;
	size_t		len;

	if (n == 0)
		return (zero());
	num = n;
	len = len_int(n);
	rslt = malloc((len + 1) * sizeof(char));
	if (rslt == NULL)
		return (NULL);
	rslt[len--] = '\0';
	if (num < 0)
	{
		rslt[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		rslt[len] = num % 10 + '0';
		num /= 10;
		len--;
	}
	return (rslt);
}
