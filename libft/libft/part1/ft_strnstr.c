/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 15:54:39 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/14 16:00:20 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char	*ft_strnstr(const char *str, const char *chr, size_t len)
{
	unsigned int j;
	unsigned int i;

	j = 0;
	if (*chr == '\0')
		return ((char*)str);
	while (str[j] != '\0' && (size_t)j < len)
	{
		if (str[j] == chr[0])
		{
			i = 1;
			while (chr[i] != '\0' && str[j + i] == chr[i] &&
					(size_t)(j + i) < len)
				++i;
			if (chr[i] == '\0')
				return ((char*)str + j);
		}
		++j;
	}
	return (NULL);
}
