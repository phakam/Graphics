/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:40:22 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 13:22:56 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	size;

	if (*little == '\0')
		return ((char*)big);
	size = ft_strlen((char *)little);
	while (*big != '\0' && len-- >= size)
	{
		if (*big == *little && ft_strncmp(big, little, size) == 0)
			return ((char*)big);
		big++;
	}
	return (NULL);
}
