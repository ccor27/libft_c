#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_copy;

	i = 0;
	s_copy = (unsigned char *)s;
	while (i < n)
		s_copy[i++] = (unsigned char)c;
	return (s);
}
/*
 this line -> (unsigned char)c 
 is used to force use a byte (0-255) without sign
 so we receive this n = 1000 we write in memory 232 (1000%256)
 to use the least significant byte */
int	main(void)
{
	char str[] = "hola mundo";
	char str2[] = "hola mundo";
	memset(str, 'r', 3);
	ft_memset(str2, 'r', 3);
	printf("origina: %s\n", str);
	printf("own: %s\n", str2);
}