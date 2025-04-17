#include "libft.h"

/*function to validate if a character is valid,it meas that is no within the set string*/
static int	ft_is_valid_character(char const *set, char c, int i)
{
	while (set[i])
	{
		if (set[i] == c)
			return (0);
		i++;
	}
	return (1);
}
static void	ft_fill_up_clean_string(const char *s1, char *result, int start,
		int end)
{
	int	i;

	i = 0;
	while (start <= end)
	{
		result[i] = s1[start];
		i++;
		start++;
	}
	result[i] = '\0';
}
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trimmed;
	int		start;
	int		end;

	// int		num_character_to_remove;
	// if s1 and set are null return empty string
	if (!s1 && !set)
		return (ft_strdup(""));
	if (!s1 || !set)
	{
		// if s1 is null, retrurn empty string
		if (!s1)
			return (ft_strdup(""));
		// if set is null return an exactly copy of s1
		if (!set)
		{
			str_trimmed = malloc((ft_strlen(s1) + 1) * sizeof(char));
			if (!str_trimmed)
				return (NULL);
			return (ft_memcpy(str_trimmed, s1, ft_strlen(s1) + 1));
		}
	}
	else
	{
		// find out the number of characters of set that are in s1
		// num_character_to_remove = ft_know_characters(s1, set);
		while (!ft_is_valid_character(set, s1[start], 0))
			start++;
		end = ft_strlen(s1) - 1;
		while (!ft_is_valid_character(set, s1[end], 0))
			end--;
		if (start > end)
			return (ft_strdup(""));
		// allocate memory,substrating the s1_length and the number of character previously got
		str_trimmed = malloc(((end - start) + 2) * sizeof(char));
		if (!str_trimmed)
			return (NULL);
		// copy into the new string the valid characters from s1
	}
}
