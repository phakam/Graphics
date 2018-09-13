/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:40:34 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 13:23:01 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int		counter1;

	counter1 = ft_strlen(str);
	while (counter1 >= 0)
	{
		if (str[counter1] == (char)c)
		{
			return (&str[counter1]);
		}
		counter1--;
	}
	return (NULL);
}
