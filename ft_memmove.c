#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	// if n == 0, don't do nothing, return null?
	if (n == 0 || dest == src)
		return (dest);
	// the original function doesn't validate if the string are null
	// validate if there are overlap (src + n <= dest) || (dest + n <= src)
	//, if this is true, there are no overlap
	if ((src + n <= dest) || (dest + n <= src))
		// no overlap, is safe use memcpy
		return ft_memcpy(dest, src, n);
	else
	{ // overlap
		if (d > s)
		{ // the first position are overlaped, copy from right to left
			while (n--)
				d[n] = s[n];
		}
		else
		{ // there are overlaping but not at the begginig, even though, is more
			// safe make the copy manually that us memcpy
			while (i < n)
			{
				d[i] = s[i];
				i++;
			}
		}
	}
	return(dest);
}
