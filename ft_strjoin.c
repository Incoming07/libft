/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bglover <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 19:22:30 by bglover           #+#    #+#             */
/*   Updated: 2019/05/05 19:22:32 by bglover          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*a;
	char	*s;

	if (!s1)
		return (NULL);
	if (!s2)
		return (NULL);
	a = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!a)
		return (NULL);
	s = (char *)s1;
	i = -1;
	while (++i < (ft_strlen(s1)))
	{
		a[i] = s[i];
	}
	s = (char *)s2;
	while (i < (ft_strlen(s1) + ft_strlen(s2)))
	{
		a[i] = *s;
		i++;
		s++;
	}
	return (a);
}
