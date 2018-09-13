/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:41:05 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 13:24:10 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *big, char const *small)
{
	size_t	len1;
	int		i;
	int		j;
	int		results;

	len1 = ft_strlen((char *)small);
	i = 0;
	j = 0;
	results = 0;
	if (len1 == 0)
		return ((char *)big);
	while (big[i])
	{
		if (big[i] == small[j])
		{
			results = ft_strncmp(&big[i], &small[j], len1);
			if (results == 0)
			{
				return ((char *)&big[i]);
			}
		}
		i++;
	}
	return (NULL);
}
