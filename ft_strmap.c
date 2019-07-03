/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bglover <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:06:04 by bglover           #+#    #+#             */
/*   Updated: 2019/05/05 17:17:34 by bglover          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_strmap(char const *s, char (*f) (char))
{
	size_t	i;
	char	*a;
	char	b;

	if (!s)
		return (NULL);
	if (!f)
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
		a[i] = f(b);
		i++;
		s++;
	}
	a[i] = '\0';
	return (a);
}
