/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kentakato <kentakato@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:50:53 by kentakato         #+#    #+#             */
/*   Updated: 2024/06/09 18:46:23 by kentakato        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define D_B "0123456789"
# define L_H_B "0123456789abcdef"
# define U_H_B "0123456789ABCDEF"

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr_base(uintptr_t address, char *base, size_t base_len);
int	ft_putnbr(int n);
int	ft_handle_format(va_list *args, char format);

#endif