/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:58:46 by miovu             #+#    #+#             */
/*   Updated: 2024/11/22 17:03:31 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_un_fd(unsigned int nbr, int fd)
{
	int	counter;

	counter = 0;
	if (nbr > 9)
		counter += ft_putnbr_un_fd(nbr / 10, fd);
	counter += ft_putchar_fd((nbr % 10) + '0', fd);
	return (counter);
}

/* int	main()
{
	unsigned int n = 4;
	
	ft_putnbr_un_fd(n, 1);
} */