#include "libft.h"
/*function to alloc spaces with malloc*/
static char	*ft_generate_space(size_t len)
{
	return ((char *)malloc(len * sizeof(char)));
}
/*auxiliar function to join the string after made de validations*/
static char	*ft_join_strings(char const *s1, char const *s2)
{
	size_t	s1_length;
	size_t	s2_length;
	char	*new_string;
	size_t	i;
	size_t	j;

	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	new_string = ft_generate_space(s1_length + s2_length + 1);
	i = 0;
	j = 0;
	while (i < s1_length + s2_length)
	{
		if (i < s1_length)
			new_string[i] = s1[i];
		else
		{
			new_string[i] = s2[j];
			j++;
		}
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s2_copy;
	char	*s1_copy;

	// in the case both string are null, we return a empty string
	if (!s1 && !s2)
		return (ft_strdup(""));
	// validate if one of them is null, if it so return which is not null
	if (!s1)
	{
		s2_copy = ft_generate_space(ft_strlen(s2) + 1);
		if (!s2_copy)
			return (NULL);
		return (ft_memcpy(s2_copy, s2, ft_strlen(s2) + 1));
	}
	else if (!s2)
	{
		s1_copy = ft_generate_space(ft_strlen(s1) + 1);
		if (!s1_copy)
			return (NULL);
		return (ft_memcpy(s1_copy, s1, ft_strlen(s1) + 1));
	}
	else
		return (ft_join_strings(s1, s2));
}
