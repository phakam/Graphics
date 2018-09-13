/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:36:22 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 13:20:41 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int result1;

	if (!s1 || !s2)
		return (0);
	result1 = ft_strcmp((char *)s1, (char *)s2);
	if (result1 == 0)
		return (1);
	else
		return (0);
}
