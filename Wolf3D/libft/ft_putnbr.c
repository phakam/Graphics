/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:31:14 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 13:01:14 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr(int n)
{
	long number1;

	number1 = (long)n;
	if (number1 < 0)
	{
		ft_putchar('-');
		number1 = number1 * (-1);
	}
	if (number1 > 9)
	{
		ft_putnbr(number1 / 10);
		number1 = (number1 % 10);
	}
	ft_putchar(number1 + '0');
}
