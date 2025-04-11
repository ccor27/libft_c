#include "libft.h"

size_t ft_strlcpy(char *dst, char *src, size_t size)
{
    size_t src_len;
    size_t dst_lenght;
    size_t i;

    src_len = ft_strlen(src);
    dst_lenght = ft_strlen(dst);
    i = 0;
    if (size == 0)
        return (src_len);
    else
    {
        while (src[i] && (dst_lenght + i) < (size - 1))
        {
            dst[dst_lenght + i] = src[i];
            i++;
        }
        dst[dst_lenght+i] = '\0';
        return (src_len);
    }
}
/*
int main(void)
{
    char src[] = "12345";
    char dest[11];
    printf("value of the real function: %ld\n",ft_strlcpy(dest,src,sizeof(dest)));
    printf("value of the own function: %ld\n", strlcpy(dest,src,sizeof(dest)));
    printf("value of the string copied: %s", dest);
    return(0);
}*/
