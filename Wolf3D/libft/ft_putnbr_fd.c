/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:31:57 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 13:01:19 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long		number1;

	number1 = (long)n;
	if (number1 < 0)
	{
		write(fd, "-", 1);
		number1 = number1 * (-1);
	}
	if (number1 > 9)
	{
		ft_putnbr_fd((number1 / 10), fd);
		number1 = (number1 % 10);
	}
	ft_putchar_fd(number1 + '0', fd);
}
