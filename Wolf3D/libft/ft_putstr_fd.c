/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mphaka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:32:31 by mphaka            #+#    #+#             */
/*   Updated: 2017/08/22 13:01:42 by mphaka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int counter1;

	counter1 = 0;
	while (s[counter1] != '\0')
	{
		write(fd, &s[counter1], 1);
		counter1++;
	}
}
