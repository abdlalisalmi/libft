/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 00:21:38 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/15 00:28:29 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;
	int j;
	int lens;
	int lend;

	i = 0;
	lend = ft_strlen((char*)dst);
	lens = ft_strlen((char*)src);
	j = (size - lend - 1);
	if (j >= 0)
	{
		dst += lend;
		while (i < j && src[i])
			*dst++ = src[i++];
		*dst = '\0';
		return (lens + lend);
	}
	return (lens + size);
}
