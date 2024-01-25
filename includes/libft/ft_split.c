/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:51:30 by aelomari          #+#    #+#             */
/*   Updated: 2023/12/31 14:09:46 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] != c) && ((str[i + 1] == c) || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static void	*free_all(char **sp)
{
	size_t	j;

	j = 0;
	while (sp[j])
	{
		free(sp[j]);
		j++;
	}
	free(sp);
	return (NULL);
}

static void	fill_split(char **split, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	wordlen;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			wordlen = 0;
			while (s[i + wordlen] && s[i + wordlen] != c)
				wordlen++;
			split[j] = malloc(wordlen + 1);
			if (!split[j])
				free_all(split);
			ft_strlcpy(split[j], s + i, wordlen + 1);
			i += wordlen;
			j++;
		}
	}
	split[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	fill_split(split, s, c);
	return (split);
}

// int main(int argc, char const *argv[])
// {
// 	if (argc == 3)
// 	{
// 		int i = 0;
// 		char **str = ft_split(argv[1] , argv[2][0]);
// 		while (str[i] != NULL)
// 		{
// 			printf("%s\n" , str[i]);
// 			i++;
// 		}

// 	}

// 	return (0);
// }
