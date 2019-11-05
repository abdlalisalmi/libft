/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:23:51 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/13 17:23:54 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*pstr1;
	unsigned char	*pstr2;
	size_t			i;

	i = 0;
	if (n == 0)
		return (0);
	pstr1 = (unsigned char *)str1;
	pstr2 = (unsigned char *)str2;
	while (i < n)
	{
		if (pstr1[i] != pstr2[i])
			return (pstr1[i] - pstr2[i]);
		i++;
	}
	return (0);
}
