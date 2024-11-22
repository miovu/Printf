/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:51:45 by miovu             #+#    #+#             */
/*   Updated: 2024/11/22 13:14:02 by miovu            ###   ########.fr       */
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

/* int	main()
{
	int	number = 42;
	ft_putnbr_fd(number, 1);
} */