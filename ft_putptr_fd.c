/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:35:32 by miovu             #+#    #+#             */
/*   Updated: 2024/11/22 17:25:08 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_fd(void *ptr, int fd)
{
	unsigned long long	nbr;
	int					counter;

	counter = 0;
	nbr = (unsigned long long)ptr;
	if (ptr == NULL)
		counter += write(fd, "(nil)", 5);
	else
	{
		counter += write(fd, "0x", 2);
		counter += ft_putnbr_hex(nbr, 'x', fd);
	}
	return (counter);
}

/* #include <stdio.h>
int	main()
{
	void *a = "asfgjagfasfh1242356";
	printf("%p\n", a);
	printf("%d\n", ft_putptr_fd(a, 1));
} */