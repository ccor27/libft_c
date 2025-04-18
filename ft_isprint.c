#include <stdio.h>
#include <ctype.h>

/*Function to know if the character is a printable one*/
int ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	else
		return (1);
}
/*
int	main(void)
{
	printf("my function: %d\n", ft_isprint(32));
	printf("real function: %d", isprint(32));
}*/
