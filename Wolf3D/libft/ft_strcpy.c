/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:34:49 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 13:18:09 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char const *src)
{
	int counter1;

	counter1 = 0;
	while (src[counter1] != '\0')
	{
		dest[counter1] = src[counter1];
		counter1++;
	}
	dest[counter1] = '\0';
	return (dest);
}
