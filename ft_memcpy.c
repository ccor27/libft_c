#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned const char	*s;
	size_t			i;

	if (n == 0)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char src1[] = "Hola mundo!";
	char dest1a[20];
	char dest1b[20];

	memcpy(dest1a, src1, strlen(src1) + 1);
	ft_memcpy(dest1b, src1, strlen(src1) + 1);
    printf("-------copy simple text-------\n");
	printf("original function: %s\n", dest1a);
	printf("own function:       %s\n", dest1b);
    printf("------------------------------\n");
}*/