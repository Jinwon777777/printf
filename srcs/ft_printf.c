/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:31:56 by jiha              #+#    #+#             */
/*   Updated: 2022/05/23 14:53:02 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_print(char format, va_list args)
{
	int	v;

	v = 0;
	if (format == 'c')
		v = ft_print_c(va_arg(args, char));
	else if (format == 'i' || format == 'd')
		v = ft_print_int(va_arg(args, int));
	else if (format == 's')
		v = ft_print_str(va_arg(args, char *));
	else if (format == 'u')
		v = ft_print_u((unsigned int) va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		v = ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == 'p')
		v = ft_print_ptr(va_arg(args, void *));
	else if (format == '%')
	{
		ft_putchar("%");
		v = 1;
	}
	return (v);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret;
	va_list	args;

	i = -1;
	ret = 0;
	va_start(args, format);
	while (format[++i])
	{
		if (format[i] == '%' && (format[i + 1] != '\0'))
			ret += ft_format_print(format[++i], args);
		else
		{
			ft_putchar(format[i]);
			ret += 1;
		}
	}
	va_end(args);
	return (ret);
}
