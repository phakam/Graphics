/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:33:24 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 13:01:52 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	int counter1;
	int len1;

	len1 = ft_strlen(str1);
	counter1 = 0;
	while (str2[counter1] != '\0')
	{
		str1[len1 + counter1] = str2[counter1];
		counter1++;
	}
	str1[len1 + counter1] = '\0';
	return (str1);
}
