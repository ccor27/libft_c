#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s)
{
    size_t lenght;
    lenght = 0;
    while(s[lenght])
      lenght++;
    return(lenght);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    //get the dest lenght
    unsigned dest_lenght = ft_strlen(dest);
    //get the source lenght
    unsigned source_lenght = ft_strlen(src);
    //declare an indice
    unsigned int i = 0;
    //if size is less or equal than zero, return source's lenght
    if(size <= 0)
      return(source_lenght);
    //if size is less than the dest's lenght
    if(size <= dest_lenght)
       //return source's lenght plus size
       return(source_lenght + size);
    //if not, append in the dest (at the end) all from source (if it's possible) reserving the last position for '\n'
    while((i < size - dest_lenght - 1) && src[i])
    {
        dest[dest_lenght + i] = src[i];
        i++;
    }
    //add the '\n'
    dest[dest_lenght + i] = '\0';
    //return the dest's lenght plus source's lenght
    return dest_lenght + source_lenght;
}
int main(void)
{
   char first1[] = "This is ";
    char last1[] = "a potentially long string";
    int r1;
    int size1 = 50;
    char buffer1[size1];
    strcpy(buffer1,first1);
    r1 = strlcat(buffer1,last1,size1);
    puts(buffer1);
    printf("Value returned from original function: %d\n",r1);
    if( r1 > size1 )
        puts("String truncated\n");
    else
        puts("String was fully copied\n");
    char first2[] = "This is ";
    char last2[] = "a potentially long string";
    int r2;
    int size2 = 50;
    char buffer2[size2];
    strcpy(buffer2,first2);
    r2 = ft_strlcat(buffer2,last2,size2);
    puts(buffer2);
    printf("Value returned from own function: %d\n",r2);
    if( r2 > size2 )
        puts("String truncated");
    else
        puts("String was fully copied");    
}