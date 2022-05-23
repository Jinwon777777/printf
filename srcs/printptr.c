/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:00:40 by jiha              #+#    #+#             */
/*   Updated: 2022/05/23 14:39:15 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putptr(unsigned long ptr)
{
	char *val;

	val = "0123456789abcdef";
	if (ptr > 0)
	{
		ft_putptr(ptr / 16);
		ft_putptr(ptr % 16);
	}
	else
		ft_putchar(val[ptr]);
}

int	ft_print_ptr(void *p)
{
	int				ret;
	unsigned long	ptr;

	write(1, "0x", 2);
	ptr = (unsigned long)p;
	ft_putptr(ptr);
	ret = ft_hexlen(ptr) + 2;
	return (ret);
}