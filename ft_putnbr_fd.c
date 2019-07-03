/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bglover <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 17:02:44 by bglover           #+#    #+#             */
/*   Updated: 2019/05/11 17:02:47 by bglover          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	long long nbr;
	long long long_n;

	long_n = n;
	if (long_n < 0)
	{
		long_n *= -1;
		write(fd, "-", 1);
	}
	if (long_n <= 9)
	{
		long_n += '0';
		write(fd, &long_n, 1);
	}
	else
	{
		nbr = long_n % 10;
		ft_putnbr_fd(long_n / 10, fd);
		nbr = '0' + nbr;
		write(fd, &nbr, 1);
	}
}
