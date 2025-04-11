#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (*s == 0)
		return (0);
	while (*s)
	{
		if (*s== c)
         return ((char *)s);
		s++;
	}
	if (c == '\0')
		return((char *)s);
	return 0;
}
/*
int	main(void)
{
    char *s1;
    char *s2;
    s1 =  strchr("Hello world", 108);
    s2 = ft_strchr("Hello world", 108);
	printf("value of the real function: %s\n",s1);
	printf("value of the own function: %s", s2);
}*/