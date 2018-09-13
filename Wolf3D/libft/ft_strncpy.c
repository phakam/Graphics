/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:39:08 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 13:22:36 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char const *src, size_t n)
{
	size_t counter1;

	counter1 = 0;
	while (src[counter1] && n)
	{
		dest[counter1] = src[counter1];
		counter1++;
		n--;
	}
	while (n)
	{
		dest[counter1] = '\0';
		n--;
		counter1++;
	}
	return (dest);
}
