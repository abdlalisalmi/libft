/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 00:21:38 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/15 00:28:29 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] && (j < (size - 1)))
	{
		if ((unsigned long)ft_strlen(dst) == (size - 1))
			break ;
		if ((unsigned long)ft_strlen(dst) > (size - 1))
			break ;
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return ((unsigned long)(ft_strlen((char*)src)));
}
