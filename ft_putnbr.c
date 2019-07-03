/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bglover <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 15:35:43 by bglover           #+#    #+#             */
/*   Updated: 2019/05/11 15:35:45 by bglover          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr(int n)
{
	long nbr;
	long long_n;

	long_n = n;
	if (long_n < 0)
	{
		long_n *= -1;
		write(1, "-", 1);
	}
	if (long_n <= 9)
	{
		long_n += '0';
		write(1, &long_n, 1);
	}
	else
	{
		nbr = long_n % 10;
		ft_putnbr(long_n / 10);
		nbr = '0' + nbr;
		write(1, &nbr, 1);
	}
}
