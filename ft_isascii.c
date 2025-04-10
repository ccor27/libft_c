#include "libft.h"

int ft_isascii(int c)
{
     return (c >= 0 && c <= 127);
}

int main(void)
{
    printf("value of the real function: %d\n", isascii(10));
    printf("value of the own function: %d", ft_isascii(10));
}