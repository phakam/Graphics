/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:27:36 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 12:57:08 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem1;

	if (!(mem1 = (void *)malloc(sizeof(mem1) * (size))) || !size)
		return (NULL);
	mem1 = ft_memset(mem1, 0, size);
	return (mem1);
}
