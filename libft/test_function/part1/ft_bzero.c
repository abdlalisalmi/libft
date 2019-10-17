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
void	*ft_memset(void *str, int c, size_t n)
{
	char	*pstr;
	unsigned int		i;

	pstr = str;
	i = 0;
	while (i < n)
	{
		pstr[i] = c;
		i++;
	}
	return (pstr);
}
void	ft_bzero(void *str, size_t n)
{
	ft_memset(str,NULL,n);
}

int main()
{
	int i;
	char str[10] = "abdlali";
	char str1[10] = "abdlali";
    bzero(str,4);
	for(i = 0;i<=10;i++)
	{
		printf("%c ",str[i]);
		i++;
	}
	//printf("Origin : %s\n",str[6]);
	printf("\n");
    ft_bzero(str1,4);
	for(i = 0;i<=10;i++)
	{
		printf("%c ",str1[i]);
		i++;
	}
	printf("\n");
	//printf("My : %s\n",str1[6]);
	return(0);
}