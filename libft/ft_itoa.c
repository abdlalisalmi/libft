/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 16:45:10 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/20 16:45:15 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen(long x)
{
	int sing;
	int i;

	if (x == 0)
		return (1);
	sing = 0;
	i = 0;
	if (x < 0)
	{
		x *= -1;
		sing = 1;
	}
	while (x > 0)
	{
		x /= 10;
		i++;
	}
	return (i + sing);
}

char	*ft_strrev(char *str)
{
	int i;
	int len;
	int temp;

	len = 0;
	i = 0;
	while (str[len])
		len++;
	len -= 1;
	if (str[0] == '-')
		i = 1;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;
	int		i;

	i = 0;
	nb = n;
	len = ft_intlen(nb);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (nb < 0)
	{
		str[i] = '-';
		i++;
		nb *= (-1);
	}
	while (i < len)
	{
		str[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	str[i] = '\0';
	str = ft_strrev(str);
	return ((char*)str);
}
