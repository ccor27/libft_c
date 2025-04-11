#include "libft.h"

int ft_isalnum(int c)
{
    if(ft_isalpha(c) || ft_isdigit(c))
       return(8);
    else
       return(0);
}
/*
int main(void)
{
    printf("value of the real function: %d\n",isalnum(91));
    printf("value of the own function: %d",ft_isalnum(91));
}*/