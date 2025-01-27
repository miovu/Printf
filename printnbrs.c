/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnbrs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chillhoneyyy <chillhoneyyy@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:51:45 by miovu             #+#    #+#             */
/*   Updated: 2025/01/20 15:46:08 by chillhoneyy      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr, int fd)
{
	int	counter;

	counter = 0;
	if (nbr == -2147483648)
		counter += ft_putstr("-2147483648", fd);
	else
	{
		if (nbr < 0)
		{
			counter += ft_putchar('-', fd);
			nbr = nbr * -1;
		}
		if (nbr > 9)
			counter += ft_putnbr(nbr / 10, fd);
		counter += (ft_putchar((nbr % 10) + '0', fd));
	}
	return (counter);
}

int	ft_putnbr_un_fd(unsigned int nbr, int fd)
{
	int	counter;

	counter = 0;
	if (nbr > 9)
		counter += ft_putnbr_un_fd(nbr / 10, fd);
	counter += ft_putchar((nbr % 10) + '0', fd);
	return (counter);
}
