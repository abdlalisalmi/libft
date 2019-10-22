/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 18:31:44 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/20 18:31:47 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*map_s;

	map_s = ft_strdup((char*)s);
	i = 0;
	if (!map_s || !s)
		return (NULL);
	while (map_s[i])
	{
		map_s[i] = f(i, map_s[i]);
		i++;
	}
	map_s[i] = '\0';
	return (map_s);
}
