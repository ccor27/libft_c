#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
   
    size_t little_len = ft_strlen(little);
    if(little_len == 0)
       return((char *)big);
    size_t big_len = ft_strlen(big);
    char *sub_begin = 0;
    int i = 0;
    int count = 0;
    while(big[i] && i < len)
    {
        if(len - i < little_len)
           break;
        size_t j = 0;
        while (j < little_len && (i + j) < len && big[i + j] == little[j])
            j++;

        if (j == little_len)
            return (char *)&big[i];

        i++;
    }
    return(0);
        /*if(little[count] != '\0')
        {
            if(little[count] == *big)
            {
                if(count == 0)
                  sub_begin = (char *)big;
                count++;
            }
            else
            {
                count = 0;
                sub_begin= 0;
            }
        }
        if(count == little_len)
          return(sub_begin);
        big++;
        i++;*/
   
}

int main(void)
{
    printf("value of real function: %s\n", strnstr("abaac","aac",5));
    printf("value of own function: %s\n", ft_strnstr("abaac","aac",5));
}
 //validate if the little is empty, if it so return big[0]
    //when the first n characters are found, stop the loop
    //in each cycle, validate that the rest of big be greater or equal to n