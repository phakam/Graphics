/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:36:52 by mphaka            #+#    #+#             */
/*   Updated: 2017/09/21 11:25:31 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*strj;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	strj = (char *)malloc(sizeof(*strj) * (len + 1));
	if (strj == NULL)
		return (NULL);
	ft_strcpy(strj, s1);
	ft_strcat(strj, s2);
	return (strj);
	free(strj);
}
