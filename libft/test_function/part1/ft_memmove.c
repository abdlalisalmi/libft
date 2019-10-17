#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*pdst;
	char			*psrc;
	int				src_len;
	unsigned int	i;

	pdst = (char *)dst;
	psrc = (char *)src;
	src_len = ft_strlen(psrc);
	i = 0;
	while (src_len >= 0 && i < len)
	{
		pdst[i] = psrc[i];
		i++;
		src_len--;
	}
	pdst[i] = '\0';
	return (pdst);
}*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*pdst;
	const unsigned char	*psrc;

	pdst = (unsigned char*)dst;
	psrc = (unsigned char*)src;
	i = 0;
	if (psrc < pdst)
		while (++i <= len)
			pdst[len - i] = psrc[len - i];
	else
		while (len-- > 0)
			*(pdst++) = *(psrc++);
	return (dst);
}

int main()
{
	char s1[] = "sa";
	char d1[20] = "abdlali";

	char s2[] = "sa";
	char d2[20] = "abdlali";

	char *dst1 = memmove(d1,s1,10);
	char *dst2 = ft_memmove(d2,s2,10);
	printf("Origin :\n");
	for (int i = 0; i < 10; i++)
	{
		printf("test1[%d] = %c\n", i, dst1[i]);
	}
	printf("\nMy : \n");
	for (int i = 0; i < 10; i++)
	{
		printf("test1[%d] = %c\n", i, dst2[i]);
	}
	return(0);
}