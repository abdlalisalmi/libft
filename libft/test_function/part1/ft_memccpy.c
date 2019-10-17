/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:36:05 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/12 16:36:12 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	char		*dest;
	char		*sourc;

	i = 0;
	dest = dst;
	sourc = (char *)src;
	while (i < n && (i == 0 || sourc[i - 1] != c))
	{
		dest[i] = sourc[i];
		i++;
	}
	if (i > 0 && sourc[i - 1] == c)
		return (dest + i);
	else
		return (NULL);
}
int main()
{
    char dst1[10];
    char src1[] = "123456789";

    char dst2[10];
    char src2[] = "123456789";

    char c = '4';

    memccpy(dst1,src1,c,9);
    ft_memccpy(dst2,src2,c,9);

    printf("Origin : %s\n",dst1);
    printf("My : %s\n",dst2);
    return (0);
}