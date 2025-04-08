#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z'))
		return (0);
	else
		return (1);
}

int	main(void)
{
	printf("my function: %d\n", ft_isalpha('a'));
	printf("real function: %d", isalpha('a'));
}