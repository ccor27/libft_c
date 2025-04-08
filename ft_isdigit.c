#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (!(c >= 48 && c <= 57))
		return (0);
	else
		return (1);
}
int	main(void)
{
	printf("my function: %d\n", ft_isdigit(128));
	printf("real function: %d", isdigit(128));
}