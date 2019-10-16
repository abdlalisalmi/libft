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
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	char	        *pdest;
	char	        *psrc;

	pdest = (char *)dest;
	psrc = (char *)src;
	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		if (psrc[i] == ((char)c))
			break ;
		i++;
	}
}

int main()
{
    char dst1[10] = "salmi";
    char src1[] = "abdlali";

    char dst2[10] = "salmi";
    char src2[] = "abdlali";

    char c = 'd';

    memccpy(dst1,src1,c,3);
    ft_memccpy(dst2,src2,c,3);

    printf("Origin : %s\n",dst1);
    printf("My : %s\n",dst2);
    return (0);
}