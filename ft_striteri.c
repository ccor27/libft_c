#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned	i;

	if (!s)
		return (ft_strdup(""));
	i = 0;
	while (s[i])
	{
		f(i, s[i]);
		i++;
	}
}
