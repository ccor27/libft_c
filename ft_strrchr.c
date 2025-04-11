#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t s_lenght = ft_strlen(s);
        if(c == '\0')
          return((char *)&s[s_lenght]);
    while(s_lenght > 0)
    {
        if(s[s_lenght]==c)
         return((char *)&s[s_lenght]);
        s_lenght--;
    }
    return(0);
}
int	main(void)
{
    char *s1;
    char *s2;
    s1 =  strrchr("Hello world", '\0');
    s2 = ft_strrchr("Hello world", '\0');
	printf("value of the real function: %s\n",s1);
	printf("value of the own function: %s", s2);
}