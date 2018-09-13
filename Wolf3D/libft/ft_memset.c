/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:29:22 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 12:59:46 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	int		counter1;

	str = b;
	counter1 = 0;
	while (counter1 < (int)len)
	{
		str[counter1] = c;
		counter1++;
	}
	return (str);
}
