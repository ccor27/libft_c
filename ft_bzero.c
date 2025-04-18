#include "libft.h"

/*Fucntion to set n position with 0*/
void ft_bzero(void *s, size_t n)
{
        //we use the ft_memset to reuse code
        //sending the value of zero in ascii
        ft_memset(s,0x00,n);
}
