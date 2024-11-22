/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miovu <miovu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:45:00 by miovu             #+#    #+#             */
/*   Updated: 2024/11/22 13:14:06 by miovu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(int c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

/* int	main()
{
	char	a = 'M';
	ft_putchar_fd(a, 1);
} */