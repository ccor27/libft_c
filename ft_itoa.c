#include "libft.h"

/*Auxilar recursive function to know the number of digits*/
static int	ft_know_num_digits(int n, int num)
{
	if (n > 0)
		return (ft_know_num_digits(n / 10, num + 1));
	return (num);
}
/*Auxiliar funtion to handle the 0 and int_min cases*/
static char *ft_handle_special_cases(int n)
{
	if(n == 0)
	 return(ft_strdup("0"));
	else
	 return(ft_strdup("-2147483648"));
}
/*Auxiliar function to make the conversion*/
static char *ft_convert_int_to_string(int n, int is_negative, int size, char *s)
{
	//the total size is the size (num of digits) + the flag (1 or 0)
	int total_size =size + is_negative;
	//we set the null-terminator in the last position
	s[total_size] = '\0';
	//we'll do the loop from the end to the start
	while(total_size--)
	{
		s[total_size] = (n % 10) + '0';
		n /= 10;
	}
	//is the flag is true, we set the - in the start of the string
	if(is_negative)
	 s[0] = '-';
	return(s);
}
/*Principal function*/
char	*ft_itoa(int n)
{
	int		is_negative;
	char	*num_in_string;
	int		num_of_digits;


	is_negative = 0;
	//validate the special cases
	if (n == 0 || n <= -2147483648)
		return (ft_handle_special_cases(n));
	if (n < 0)
	{
		//is the n is negative, we turn it to positive
		//and change the flag
		is_negative = 1;
		n = n * -1;
	}
	//get the number of digits
	num_of_digits = ft_know_num_digits(n, 0);
	//depending of the flag, we allocate memory with 1 or 2 spaces
	if (is_negative)
		num_in_string = malloc((num_of_digits + 2) * sizeof(char));
	else
		num_in_string = malloc((num_of_digits + 1) * sizeof(char));
	//if the allocation of memory fails, we return null
	if (!num_in_string)
		return (NULL);
	return(ft_convert_int_to_string(n,is_negative,num_of_digits,num_in_string));
}
