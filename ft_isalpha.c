#include "libft.h"

int	ft_isalpha(int c)
{
		return((c >= 97 && c <= 122) && !(c >= 65 && c <= 90));
}
/*
int	main(void)
{
	printf("my function: %d\n", ft_isalpha('0'));
	printf("real function: %d", isalpha('0'));
}*/