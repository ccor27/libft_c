#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
/*
int main(void)
{
    printf("value of the real funtion: %c\n", tolower(91));
    printf("value of the own funtion: %c", ft_tolower(91));
}*/