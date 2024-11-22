/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:59:41 by miovu             #+#    #+#             */
/*   Updated: 2024/11/22 17:20:21 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned long long nbr, char c, int fd)
{
	char	*hex;
	int		counter;

	counter = 0;
	hex = LC_HEX;
	if (c == 'X')
		hex = UP_HEX;
	if (nbr > 15)
		counter += ft_putnbr_hex(nbr / 16, c, fd);
	counter += ft_putchar_fd(hex[nbr % 16], fd);
	return (counter);
}

/* #include <stdio.h>
int	main()
{
	unsigned int	n = 42;
	char m = 'X';
	
	ft_putnbr_hex_fd(n, m, 1);
} */