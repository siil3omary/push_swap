/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:17:00 by aelomari          #+#    #+#             */
/*   Updated: 2024/01/01 15:45:43 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*constr(char const *s1, char const *s2)
{
	size_t	all_len;
	char	*result;
	size_t	i;
	size_t	ri;

	all_len = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc((all_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ri = 0;
	i = 0;
	while (s1[i])
		result[ri++] = s1[i++];
	i = 0;
	while (s2[i])
		result[ri++] = s2[i++];
	result[ri] = '\0';
	return (result);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (!s1 || !s2)
	{
		if (s1)
			return (ft_strdup(s1));
		else if (s2)
			return (ft_strdup(s2));
		else
			return (NULL);
	}
	return (constr(s1, s2));
}
