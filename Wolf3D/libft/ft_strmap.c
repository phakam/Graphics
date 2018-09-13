/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:37:26 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 13:21:59 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	char	*str;
	int		counter1;

	counter1 = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (s[counter1] != '\0' && f)
	{
		str[counter1] = f(s[counter1]);
		counter1++;
	}
	str[counter1] = '\0';
	return (str);
}
