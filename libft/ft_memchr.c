/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 20:23:19 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/12 20:23:29 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t c)
{
	const char		*pstr;
	unsigned int	i;

	pstr = (const char *)str;
	i = 0;
	while (i < c)
	{
		if (pstr[i] == ch)
			return (void *)&pstr[i];
		i++;
	}
	return (NULL);
}
