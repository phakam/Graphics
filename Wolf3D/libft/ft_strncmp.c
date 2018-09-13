/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:38:57 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 13:22:32 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		count;

	count = 0;
	while (s1[count] == s2[count] && count < n && s1[count] != '\0')
		count++;
	if (count == n)
		return ((unsigned char)s1[count - 1] - (unsigned char)s2[count - 1]);
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}
