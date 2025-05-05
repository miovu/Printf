/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Print_nbrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:51:45 by miovu             #+#    #+#             */
/*   Updated: 2024/12/27 18:00:05 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int nbr, int fd)
{
	int	counter;

	counter = 0;
	if (nbr == -2147483648)
		counter += ft_putstr_fd("-2147483648", fd);
	else
	{
		if (nbr < 0)
		{
			counter += ft_putchar_fd('-', fd);
			nbr = nbr * -1;
		}
		if (nbr > 9)
			counter += ft_putnbr_fd(nbr / 10, fd);
		counter += (ft_putchar_fd((nbr % 10) + '0', fd));
	}
	return (counter);
}

int	ft_putnbr_un_fd(unsigned int nbr, int fd)
{
	int	counter;

	counter = 0;
	if (nbr > 9)
		counter += ft_putnbr_un_fd(nbr / 10, fd);
	counter += ft_putchar_fd((nbr % 10) + '0', fd);
	return (counter);
}