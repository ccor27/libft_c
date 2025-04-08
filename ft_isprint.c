#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
    if(c < 32 ||  c > 126)
      return(0);
    else
     return(1);
}
int	main(void)
{
	printf("my function: %d\n", ft_isprint(35));
	printf("real function: %d", isprint(35));
}