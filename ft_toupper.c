#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
/*
int main(void)
{
    printf("value of the real funtion: %c\n", toupper(91));
    printf("value of the own funtion: %c", ft_toupper(91));
}*/