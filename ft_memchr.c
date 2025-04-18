#include "libft.h"

/*Function to get the position of the first ocurrence of the char in the string*/
void *memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_copy;

	i = 0;
	s_copy = (unsigned char *)s;
	while (i < n)
	{
		if (s_copy[i] == (unsigned char)c)
			return ((void *)&s_copy[i]);
		i++;
	}
	return (0);

}
