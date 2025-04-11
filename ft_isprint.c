#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
	if(c >= 32 &&  c <= 126)
      return(16384);
	else
	  return(0);
}
/*
int	main(void)
{
	printf("my function: %d\n", ft_isprint(32));
	printf("real function: %d", isprint(32));
}*/