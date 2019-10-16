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

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	char			*pstr1;
	char			*pstr2;
	unsigned int	i;

	pstr1 = (char*)str1;
	pstr2 = (char*)str2;
	i = 0;
	while (i <= n)
	{
		if (pstr1[i] == '\0' && pstr2[i] == '\0')
			break ;
		if (pstr1[i] != pstr2[i])
			return (pstr1[i] - pstr2[i]);
		i++;
	}
	return (0);
}
