/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 13:41:47 by mzridi            #+#    #+#             */
/*   Updated: 2021/12/26 16:24:18 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

int	ft_putnbr(unsigned int n, int fd)
{
	int		reversed_nb[10];
	char	digit;
	int		count_digit;
	int		i;

	count_digit = 0;
	digit = '0';
	while (n != 0)
	{
		reversed_nb[count_digit] = (n % 10);
		count_digit++;
		n /= 10;
	}
	i = count_digit;
	while (i > 0)
	{
		digit = reversed_nb[i - 1] + '0';
		ft_put_c(digit);
		i--;
	}
	return (count_digit);
}

int	ft_put_u(unsigned int n)
{
	unsigned int	nbr;

	nbr = n;
	if (n == 0)
	{
		return (ft_put_c('0'));
	}
	return (ft_putnbr(n, fd));
}
