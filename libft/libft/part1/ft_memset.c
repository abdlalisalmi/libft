/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:51:25 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/10 16:51:31 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char			*pstr;
	unsigned int	i;

	pstr = str;
	i = 0;
	while (i < n)
	{
		pstr[i] = c;
		i++;
	}
	return (pstr);
}
