/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:18:10 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/12 17:18:15 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*pdst;
	char			*psrc;
	unsigned int	i;

	pdst = (char *)dst;
	psrc = (char *)src;
	i = 0;
	while (i < len)
	{
		pdst[i] = psrc[i];
		i++;
	}
	pdst[i] = '\0';
	return (pdst);
}
