#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
  return(c >= 32 &&  c <= 126);
}
int	main(void)
{
	printf("my function: %d\n", ft_isprint(30));
	printf("real function: %d", isprint(30));
}