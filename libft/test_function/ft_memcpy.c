#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*pdst;
	char	*psrc;
	unsigned int		i;

	pdst = (char *)dst;
	psrc = (char *)src;
	i = 0;
	while (i < len)
	{
		pdst[i] = psrc[i];
		i++;
	}
	pdst[i] = '\0';
	return (pdst);
}

int main()
{
	char src[] = "salmi";
	char dst[20] = "abdlali";
	char *test = ft_memmove(dst,src,10);
	char *test2 = memmove(dst,src,10);
	printf("Origin : %s\n",test);
	printf("My : %s",test);
	return(0);
}