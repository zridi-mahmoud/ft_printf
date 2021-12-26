/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:17:04 by mzridi            #+#    #+#             */
/*   Updated: 2021/12/26 16:33:25 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "ft_printf.h"

int	ft_percent(char c)
{
	if (c == '%')
		return (1);
	return (0);
}

int	ft_putarg(va_list *valist, char c)
{
	if (c == '%')
		return (ft_put_c('%'));
	if (c == 'c')
		return (ft_put_c(va_arg(*valist, char)));
	if (c == 'd' || c == 'i')
		return (ft_put_d(va_arg(*valist, char)));
	if (c == 'p')
		return (ft_put_p(va_arg(*valist, char)));
	if (c == 's')
		return (ft_put_s(va_arg(*valist, char)));
	if (c == 'u')
		return (ft_put_u(va_arg(*valist, int)));
	if (c == 'x' || c == 'X')
		return (ft_put_x(va_arg(*valist, char)));
}

int	ft_varcount(char *s)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i + 1] && ft_percent(s[i]))
		{
			if (!ft_percent(s[i + 1]))
				count++;
			i ++;
		}
		i++;
	}
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int		printed;
	int		i;
	va_list	valist;
	int		count;

	i = 0;
	va_start(valist, s);
	while (s[i])
	{
		if (!ft_percent(s[i]))
			count += ft_put_c(s[i]);
		else if (s[i + 1])
		{
			count += ft_putarg(&valist, s[++i]);
			// count += ft_putarg(va_arg(valist, void), s[++i]);
		}
		i++;
	}
	va_end(valist);
	return (count);
}

//			 \>
//	 |_|  \( )>
int	main(void)
{
	int	a;

	a = ft_printf("number : %u ..", 15);
	printf("%i", a);
	return (0);
}
