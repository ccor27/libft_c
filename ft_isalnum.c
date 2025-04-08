#include <ctype.h>
#include <stdio.h>

int ft_isalnum(int c)
{
    if( !(c >= 48 && c <= 57) && !(c >= 97 && c <= 122) 
         && !(c >= 65 && c <= 90))
        return (0);
    else
        return(8);//this return the real function
}

int main(void)
{
    printf("value of the real function: %d\n",isalnum(180));
    printf("value of the own function: %d",ft_isalnum(180));
}