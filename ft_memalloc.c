/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bglover <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 19:28:05 by bglover           #+#    #+#             */
/*   Updated: 2019/05/04 19:28:07 by bglover          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	size_t	*a;
	size_t	i;

	if (size > 4294967295)
		return (NULL);
	a = (void *)malloc(sizeof(void) * size + 1);
	if (!a)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		a[i] = 0;
		i++;
	}
	a[i] = '\0';
	return (!a ? NULL : a);
}
