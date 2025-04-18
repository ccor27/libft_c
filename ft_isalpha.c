#include "libft.h"

/*Function to know if a character is a letter both in uppe case and lower case*/
int	ft_isalpha(int c)
{
	//validate if the character isn't the range a-z and A-Z
	if (!(c >= 97 && c <= 122) && !(c >= 65 && c <= 90))
		return (0);
	else
		return (1024);
}
/*
int	main(void)
{
	printf("my function: %d\n", ft_isalpha('a'));
	printf("real function: %d", isalpha('a'));
}*/
