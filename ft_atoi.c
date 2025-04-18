#include "libft.h"

/*Function to convert a string into an int*/
int	ft_atoi(const char *nptr)
{
	int	i;//index  to use in the loops
	int	num;//variable to store the number
	int	sign;//flag to know if we'll have a  + or - number

	i = 0;
	num = 0;
	sign = 1;
	//first, we avoid all the spaces and format characters
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	//second, validate if there are a sing
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		//if the sign is -, we change the flag
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	//finally, a loop to get each digit, using the ft_isdigit function
	while (ft_isdigit(nptr[i]))
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (num * sign);
}
