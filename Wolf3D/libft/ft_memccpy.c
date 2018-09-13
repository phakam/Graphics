/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:27:56 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 12:57:15 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void const *src, int c, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;
	size_t			counter1;

	counter1 = 0;
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	while (counter1 < n)
	{
		pdest[counter1] = psrc[counter1];
		if (psrc[counter1] == (unsigned char)c)
			return (pdest + counter1 + 1);
		counter1++;
	}
	return (NULL);
}
