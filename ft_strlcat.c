#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t dest_lenght;
	size_t source_lenght;
	//size_t i = 0;
    dest_lenght = ft_strlen(dst);
	source_lenght = ft_strlen(src);
	if (size <= 0)
		return (source_lenght);
	if (size <= dest_lenght)
		return (size + source_lenght);
	ft_strlcpy(dst, src, size);
	/*while ((src[i]) && (dest_lenght + i) < (size - 1))
	{ 
		dst[dest_lenght + i] = src[i];
		i++;
	}
	dst[dest_lenght + i] = '\0';*/
	return (dest_lenght + source_lenght);
}
/*
int main(void)
{
   char primera[6] = "Hola ";
   char segunda[] = "mundo!";
   //printf("(función original): %s\n %lu\n", primera, strlcat(primera,segunda, sizeof(primera)));
   printf("(función propia): %s\n %lu\n", primera, ft_strlcat(primera,segunda, sizeof(primera)));
   char cuarta[6] = "Hola ";
   char tercera[] = "mundo!";
   printf("(función original): %s\n %lu\n", cuarta, strlcat(cuarta,tercera, sizeof(cuarta)));
   return(0);
}*/