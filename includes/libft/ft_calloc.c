/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:24:47 by aelomari          #+#    #+#             */
/*   Updated: 2023/11/26 13:12:42 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*data;

	if (size != 0 && count > (18446744073709551615UL / size))
		return (NULL);
	data = malloc(count * size);
	if (!data)
		return (NULL);
	ft_bzero(data, count * size);
	return (data);
}
