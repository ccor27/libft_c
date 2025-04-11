#include "libft.h"

int	ft_isalpha(int c)
{
	if((c >= 97 && c <= 122) && !(c >= 65 && c <= 90))
		return(1024);
	else
	   return(0);
}
/*
int	main(void)
{
	printf("my function: %d\n", ft_isalpha('a'));
	printf("real function: %d", isalpha('a'));
}*/