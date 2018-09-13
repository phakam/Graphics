/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:28:08 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 12:58:01 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			counter1;
	unsigned char	*ps;

	counter1 = 0;
	ps = (unsigned char *)s;
	while (counter1 < n)
	{
		if (ps[counter1] == (unsigned char)c)
			return (ps + counter1);
		counter1++;
	}
	return (NULL);
}
