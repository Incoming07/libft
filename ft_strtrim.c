/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bglover <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 20:10:46 by bglover           #+#    #+#             */
/*   Updated: 2019/05/05 20:10:50 by bglover          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_front_spaces(char const *s)
{
	size_t i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return (i);
}

static size_t	ft_end_spaces(char const *s)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (s[len] == '\0' || s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
	{
		i++;
		len--;
		if (len == 0)
			return (len);
	}
	return (i);
}

char			*ft_strtrim(char const *s)
{
	size_t	front_spaces;
	size_t	len;
	size_t	i;
	char	*a;

	if (!s)
		return (NULL);
	a = NULL;
	front_spaces = ft_front_spaces(s);
	len = (ft_strlen(s) - front_spaces - ft_end_spaces(s) + 2);
	if (ft_strlen(s) == 0 || len == 2)
		return (ft_strnew(0));
	a = (char *)malloc(sizeof(char) * (len));
	if (!a)
		return (NULL);
	i = 0;
	while (i < len)
	{
		a[i] = s[front_spaces];
		front_spaces++;
		i++;
	}
	a[i - 1] = '\0';
	return (a);
}
