/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:36:05 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/12 16:36:12 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	char		*dest;
	char		*sourc;

	i = 0;
	dest = dst;
	sourc = (char *)src;
	while (i < n && (i == 0 || sourc[i - 1] != c))
	{
		dest[i] = sourc[i];
		i++;
	}
	if (i > 0 && sourc[i - 1] == c)
		return (dest + i);
	else
		return (NULL);
}
