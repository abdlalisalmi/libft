/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:41:06 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/19 17:41:09 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trim;
	unsigned int	trim_len;
	unsigned int	i;
	unsigned int	j;

	trim_len = ft_strlen(s1) - ft_strlen(set);
	if (!(trim = (char*)malloc(trim_len)))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (ft_strchr(set, s1[i]) == NULL)
		{
			trim[j] = s1[i];
			j++;
		}
		i++;
	}
	trim[j] = '\0';
	return ((char*)trim);
}
