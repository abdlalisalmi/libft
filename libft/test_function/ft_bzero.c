/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 20:18:03 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/11 20:18:06 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *str, size_t n)
{
	char	*pstr;
	unsigned int		i;

	pstr = str;
	i = 0;
	if (n != 0)
	{
		while (i < n)
		{
			pstr[i] = NULL;
			i++;
		}
	}
}

int main()
{
	//char str[10];
	char str[10] = "abdlali";
	char str1[10] = "abdlali";
    bzero(str,4);
	printf("Origin : %s\n",str1+4);

    ft_bzero(str,4);
	printf("My : %s",str1+4);
	return(0);
}