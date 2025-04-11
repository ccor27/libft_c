#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t lenght;
    lenght = 0;
    while(s[lenght])
      lenght++;
    return(lenght);
}
/*
int main(void)
{
    printf("size: %zd\n", ft_strlen("Hola Mundo!"));
    printf("size: %zd", strlen("Hola Mundo!"));
}*/