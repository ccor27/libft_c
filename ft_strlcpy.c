#include "libft.h"

size_t ft_strlcpy(char *dest, char *src, size_t size)
{
    size_t src_len;
    size_t i;

    src_len = ft_strlen(src);
    i = 0;
    if (size == 0)
        return (src_len);
    else
    {
        while ((i < size - 1) && src[i])
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
        return (src_len);
    }
}

int main(void)
{
    char src[] = "1234567890";
    char dest[6];
    printf("value of the real function: %ld\n",ft_strlcpy(dest,src,sizeof(dest)));
    printf("value of the own function: %ld\n", strlcpy(dest,src,sizeof(dest)));
    return(0);
}
