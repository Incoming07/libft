/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bglover <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 21:57:59 by bglover           #+#    #+#             */
/*   Updated: 2019/05/04 21:58:01 by bglover          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	unsigned int i;

	if (!s)
		return ;
	if (!f)
		return ;
	i = 0;
	while (*s)
	{
		f(i, s);
		s++;
		i++;
	}
}