/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 23:22:06 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/16 23:22:09 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int		ft_strlen(char *str)
{
	char	*pstr;
	int		i;

	pstr = str;
	i = 0;
	while (pstr[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;

	new_str = malloc(ft_strlen(s1) + ft_strlen(s2));
	i = 0;
	j = 0;
	if (new_str != NULL)
	{
		while (s1[i] != '\0')
		{
			new_str[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			new_str[i] = s2[j];
			j++;
			i++;
		}
		new_str[i] = '\0';
		return (new_str);
	}
	return (NULL);
}
