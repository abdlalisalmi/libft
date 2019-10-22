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

#include "libft.h"

char	*ft_strnstr(const char *str, const char *chr, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (chr[i] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == chr[0])
		{
			j = 0;
			while (str[i + j] == chr[j] && i + j < len)
			{
				if (chr[j + 1] == '\0')
					return ((char*)str + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
