/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bglover <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 17:22:23 by bglover           #+#    #+#             */
/*   Updated: 2019/05/05 17:22:25 by bglover          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	size_t	i;
	char	*a;
	char	b;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		i++;
	a = (char *)malloc(sizeof(char) * (i + 1));
	if (!a)
		return (NULL);
	i = 0;
	while (*s)
	{
		b = (char)*s;
		a[i] = f(i, b);
		i++;
		s++;
	}
	a[i] = '\0';
	return (a);
}
