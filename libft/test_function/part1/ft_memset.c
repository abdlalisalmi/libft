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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
int main()
{
	char str[] = "abdlali";
    char str2[] = "abdlali";
	char c = 'a';
	char *test = ft_memset(str,c,5);
	char *test2 = memset(str2,c,5);
	printf("Origin : %s\n",test2);
	printf("My : %s",test);
	return(0);
}