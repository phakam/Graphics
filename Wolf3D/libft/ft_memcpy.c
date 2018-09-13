/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:28:40 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 12:58:56 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		counter1;
	char	*pdest;
	char	*psrc;

	counter1 = 0;
	pdest = (char *)dest;
	psrc = (char *)src;
	while (counter1 < (int)n)
	{
		pdest[counter1] = psrc[counter1];
		counter1++;
	}
	return ((void *)pdest);
}
