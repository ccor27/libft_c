#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned	i;
	size_t		s_length;
	char		*new_string;

	if (!s)
		return (ft_strdup(""));
	i = 0;
	s_length = ft_strlen(s);
	new_string = malloc((s_length + 1) * sizeof(char));
	if(!new_string)
	 return(NULL);
	while (s[i])
	{
		new_string[i] = f(i, s[i]);
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
