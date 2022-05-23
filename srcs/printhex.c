/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 20:38:36 by jiha              #+#    #+#             */
/*   Updated: 2022/05/23 14:17:42 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_put_x(unsigned int n)
{
	char *val;

	val = "0123456789abcdef";
	if (n >= 16)
	{
		ft_put_x(n / 16);
		ft_put_x(n % 16);
	}
	else
		ft_putchar(val[n]);
}

void ft_put_X(unsigned int n)
{
	char *val;

	val = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_put_X(n / 16);
		ft_put_X(n % 16);
	}
	else
		ft_putchar(val[n]);
}

int	ft_print_hex(unsigned int n, char c)
{
	int ret;

	if (c == 'x')
		ft_put_x(n);
	else
		ft_put_X(n);
	ret = ft_hexlen(n);
	return (ret);
}
