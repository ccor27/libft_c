#include "libft.h"

/*Function  to know is the int is a valid ascii*/
int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	else
		return (1);
}
/*
int	main(void)
{
	printf("value of the real function: %d\n", isascii(97));
	printf("value of the own function: %d", ft_isascii(97));
}*/
