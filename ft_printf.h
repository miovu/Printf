/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chillhoneyyy <chillhoneyyy@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:31:17 by miovu             #+#    #+#             */
/*   Updated: 2025/01/20 15:47:52 by chillhoneyy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

# define LC_HEX "0123456789abcdef"
# define UP_HEX	"0123456789ABCDEF"
# define DEC "0123456789"

int	skipspace(const char *s, int finder);
int	ft_printf(const char *s, ...);
int	printf_format(const char *format, va_list args);
int	ft_putchar(int c, int fd);
int	ft_putnbr(int nbr, int fd);
int	ft_putnbr_hex(unsigned long long nbr, char c, int fd);
int	ft_putnbr_un_fd(unsigned int nbr, int fd);
int	ft_putptr_fd(void *ptr, int fd);
int	ft_putstr(char *s, int fd);

#endif