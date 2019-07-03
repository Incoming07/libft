/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bglover <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 16:34:31 by bglover           #+#    #+#             */
/*   Updated: 2019/05/10 16:34:33 by bglover          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_word_count(char const *s, char c)
{
	size_t i;
	size_t word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c)
			{
				i++;
				if (s[i] == '\0')
					return (word + 1);
			}
			word++;
		}
		i++;
	}
	return (word);
}

static void			ft_free(char **array, size_t j)
{
	while (--j)
		free(array[j]);
	free(array);
}

static int			ft_calc(char const *s, char c)
{
	size_t k;

	k = 0;
	while (s[k] != '\0' && s[k] != c)
		k++;
	return (k);
}

char				**ft_strsplit(char const *s, char c)
{
	char	**array;
	size_t	j;

	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(*array) * (ft_word_count(s, c) + 1));
	if (!array)
		return (NULL);
	j = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		array[j] = ft_strsub(s, 0, ft_calc(s, c));
		if (array[j] == NULL)
			ft_free(array, j);
		j++;
		s += ft_calc(s, c);
	}
	array[j] = NULL;
	return (array);
}
