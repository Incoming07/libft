/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bglover <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 18:06:09 by bglover           #+#    #+#             */
/*   Updated: 2019/05/05 18:06:11 by bglover          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*a;
	char	*b;
	size_t	i;

	if (!s)
		return (NULL);
	a = (char *)malloc(sizeof(char) * (len + 1));
	if (!a)
		return (NULL);
	b = (char *)s;
	i = 0;
	while (i < len)
	{
		a[i] = b[start];
		start++;
		i++;
	}
	a[i] = '\0';
	return (a);
}
