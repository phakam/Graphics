/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:36:10 by mphaka            #+#    #+#             */
/*   Updated: 2017/09/21 11:55:24 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*str2;

	str2 = (char*)malloc((ft_strlen(str1) + 1) * sizeof(char));
	if (str2 == NULL)
		return (NULL);
	ft_strcpy(str2, str1);
	return (str2);
}
