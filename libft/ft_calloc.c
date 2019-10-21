/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:18:07 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/16 19:18:10 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void *ptr;

	ptr = malloc((nitems * size) + 1);
	if (nitems > 0)
	{
		ft_bzero(ptr, nitems * nitems);
		return (ptr);
	}
	return (NULL);
}
