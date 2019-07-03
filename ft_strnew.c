/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bglover <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 20:47:46 by bglover           #+#    #+#             */
/*   Updated: 2019/05/04 20:47:48 by bglover          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*a;
	size_t	i;

	if (size + 1 < size)
		return (NULL);
	if (size == 0)
	{
		a = (char *)malloc(sizeof(char) * size + 1);
		if (!a)
			return (NULL);
		a[0] = '\0';
		return (a);
	}
	a = (char *)malloc(sizeof(char) * size + 1);
	if (!a)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		a[i] = '\0';
		i++;
	}
	a[i] = '\0';
	return (a);
}
