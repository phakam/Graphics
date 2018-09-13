/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:41:29 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 13:24:22 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_trmlen(char *s)
{
	size_t			i;
	size_t			spac;
	size_t			len;

	len = ft_strlen(s);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	spac = i;
	if (s[i] != '\0')
	{
		i = len - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			i--;
			spac++;
		}
	}
	return (len - spac);
}

char				*ft_strtrim(char const *s)
{
	char			*str;
	size_t			i;
	size_t			a;
	size_t			trmln;

	i = 0;
	a = 0;
	if (!s)
		return (NULL);
	trmln = ft_trmlen((char *)s);
	str = (char *)malloc(sizeof(*str) * (trmln + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (a < trmln)
	{
		str[a] = s[i];
		a++;
		i++;
	}
	str[a] = '\0';
	return (str);
}
