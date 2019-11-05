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
	char	*sub;
	size_t	i;

	if (!s || !(sub = malloc(len + 1)))
		return (NULL);
	i = 0;
	while (s[i] != '\0' && i < len && start < ft_strlen((char*)s))
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
