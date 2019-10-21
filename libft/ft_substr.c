/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:36:16 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/16 22:36:26 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;

	ptr = malloc(len);
	i = 0;
	if (ptr != NULL)
	{
		while (i < len)
		{
			ptr[i] = s[start];
			start++;
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (NULL);
}
