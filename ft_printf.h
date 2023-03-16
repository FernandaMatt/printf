/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcaetano <fernandacunha@id.uff.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:37:29 by fcaetano          #+#    #+#             */
/*   Updated: 2022/07/01 14:44:41 by fcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_strchr(const char *s, int c);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_strlen(const char *str);
int	putptr_rec(unsigned long n, char t);
int	putptr(unsigned long n, char t);
int	putdec_rec(int n);
int	putdec(int n);
int	putunsigned(unsigned int base, unsigned int n, char c);
int	print_specifiers(va_list ptr, char specifier);
int	ft_printf(const char *str, ...);

#endif
