/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:39:51 by jiha              #+#    #+#             */
/*   Updated: 2022/05/23 14:52:46 by jiha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_format_print(char format, va_list args);
int		ft_numlen(long n);
int		ft_hexlen(unsigned long n);
int		ft_print_c(char c);
void 	ft_put_x(unsigned int n);
void 	ft_put_X(unsigned int n);
int		ft_print_hex(unsigned int n, char c);
int		ft_print_int(int num);
void 	ft_putptr(unsigned long ptr);
int		ft_print_ptr(void *p);
int		ft_print_str(char *s);
int 	ft_print_u(unsigned int n);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putnbr_u(unsigned int n);

#endif