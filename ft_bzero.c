#include "libft.h"

void ft_bzero(void *s, size_t n)
{
        ft_memset(s,0x00,n);
}