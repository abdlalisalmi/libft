/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aes-salm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:31:16 by aes-salm          #+#    #+#             */
/*   Updated: 2019/10/13 17:31:18 by aes-salm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

int     ft_memcmp(const void *str1, const void *str2, size_t n)
{
    unsigned char *pstr1;
    unsigned char *pstr2;
    unsigned int i;

    pstr1 = (unsigned char*)str1;
    pstr2 = (unsigned char*)str2;
    i = 0;
    while (i < n)
    {
        if (pstr1[i] == '\0' && pstr2[i] == '\0')
            break;
        if (pstr1[i] != pstr2[i])
            return (pstr1[i] - pstr2[i]);
        i++;
    }
    return (0);
}

int main ()
{
   char str1[15] = "zyxbcdefgh";
   char str2[15] = "abcdefgxyz";
   int n = 7;

    printf("Origin : %d\n",memcmp(str1, str2, n));
    printf("My : %d\n",ft_memcmp(str1, str2, n));
   return(0);
}
