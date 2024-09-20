/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenkato <kenkato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:50:53 by kentakato         #+#    #+#             */
/*   Updated: 2024/09/20 11:30:27 by kenkato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define DECIMAL_BASE "0123456789"
# define LOW_HEX_BASE "0123456789abcdef"
# define UP_HEX_BASE "0123456789ABCDEF"
# define VAILD_FORMATS "cspxXdiu%"

# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr_base(unsigned int number, char *base, size_t base_len);
int		ft_putnbr(int n);
int		ft_handle_format(va_list *args, char format);
int		ft_is_vaild_format(const char *format);
int		ft_handle_pointer(va_list *args);
char	*ft_strchr(const char *s, int c);

#endif