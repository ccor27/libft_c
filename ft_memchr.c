#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
	size_t i = 0;
	unsigned char *s_copy = (unsigned char*) s;
	while (i < n)
	{
		if(s_copy[i] == (unsigned char)c)
		 return((void*)&s_copy[i]);
		i++;
	}
	return(0);

}
