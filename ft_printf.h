/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 13:37:05 by mzridi            #+#    #+#             */
/*   Updated: 2021/12/26 16:24:24 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<stdlib.h>
# include<stdlib.h>
# include<unistd.h>

int	ft_put_c(char c);
int	ft_put_d(char c);
int	ft_put_p(char c);
int	ft_put_s(char c);
int	ft_put_u(unsigned int n);
int	ft_put_x(char c);

#endif
