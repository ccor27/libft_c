#include "libft.h"

int ft_isalnum(int c)
{
       return(ft_isalpha(c) || ft_isdigit(c));
}

int main(void)
{
    printf("value of the real function: %d\n",isalnum(94));
    printf("value of the own function: %d",ft_isalnum(94));
}