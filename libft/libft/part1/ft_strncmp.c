/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:38:07 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/15 19:38:09 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int i;

	i = 0;
	if (!(*str1 == '\0' && *str2 == '\0'))
	{
		while (i < n)
		{
			if (str1[i] != str2[i])
				return (str1[i] - str2[i]);
		}
	}
	return (0);
}
