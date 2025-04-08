#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c)
{
    if(!(c >= 0 && c <= 127))
      return(0);
    else
      return(1);//this value return the real function
}

int main(void)
{
    printf("value of the real function: %d\n", isascii(48));
    printf("value of the own function: %d", ft_isascii(54));
}