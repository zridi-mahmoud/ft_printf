/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 13:36:57 by mzridi            #+#    #+#             */
/*   Updated: 2021/12/26 13:36:58 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf"

int	ft_put_c(char c)
{
	write(1, &c, 1);
	return (1);
}
