/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:36:43 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 13:20:56 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	int counter1;

	counter1 = 0;
	if (!s || !f)
		return ;
	while (s[counter1] != '\0')
	{
		f(counter1, &s[counter1]);
		counter1++;
	}
}
