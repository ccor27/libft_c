#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
    if(n == 0)
       return(0);
	while ((i < n) && (s1[i] && s2[i]) && (s1[i] == s2[i]))
		i++;
    if(i == n)
      return(0);
	return (s1[i] - s2[i]);
}
int	main(void)
{
	char s1[] = "abc";
	char s2[] = "ab";
	printf("value of real function: %d\n", strncmp(s1, s2, 3));
	printf("value of own function: %d", ft_strncmp(s1, s2, 3));
	return (0);
}