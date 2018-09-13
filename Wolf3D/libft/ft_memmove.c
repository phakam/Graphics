/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:29:09 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 12:59:41 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_memcpy_2(void *s1, const void *s2, size_t len)
{
	char *ps1;
	char *ps2;

	if (len == 0 || s1 == s2)
		return (s1);
	ps1 = (char *)s1;
	ps2 = (char *)s2;
	while (len--)
	{
		ps1[len] = ps2[len];
	}
	return (s1);
}

void			*ft_memmove(void *dest, const void *src, size_t size)
{
	if (dest < src)
		return (ft_memcpy(dest, src, size));
	if (dest > src)
		return (ft_memcpy_2(dest, src, size));
	return (dest);
}
