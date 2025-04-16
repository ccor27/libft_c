#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_lenght;
	size_t	i;
	char	*sub;

	// validate if the string is null, if it so return NULL
	s_lenght = ft_strlen(s);
	i = 0;
	// if the start is greater than the s_length, we return a empty string
	if (start >= s_lenght)
		return (ft_strdup(""));
	// this is to make more secure the function, to no get access to memory that
	// we shouldn't
	// for example if we receive ("hola mundo", 7,10); it could try to copy memory that is
	// outside of the string (that is 10)
	if (len > s_lenght - start)
		len = s_lenght - start;
	// validate if the malloc works, otherwise return NULL
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (s[start] && i < len)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
