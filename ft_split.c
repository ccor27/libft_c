#include "libft.h"

static int	ft_know_words(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word_flag;

	i = 0;
	count = 0;
	in_word_flag = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!in_word_flag)
			{
				count++;
				in_word_flag = 1;
			}
		}
		else
			in_word_flag = 0;
		i++;
	}
	return (count);
}
static void	*ft_free_memory(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	return (NULL);
}
char	**ft_fill_up_matrix(const char *s, char **matrix, char c)
{
	int	i;
	int	start;
	int	index;

	i = 0;
	start = -1;
	index = 0;
	while (s[i])
	{
		if (s[i] != c && start == -1)
			start = i;
		else if ((s[i] == c || s[i + 1] == '\0') && start != -1)
		{
			if (s[i] == c)
				matrix[index++] = ft_substr(s, start, i - start);
			else
				matrix[index++] = ft_substr(s, start, i - start + 1);
			if (!matrix[index - 1])
				return (NULL);
			start = -1;
		}
		i++;
	}
	matrix[index] = NULL;
	return (matrix);
}
static char	**ft_handle_special_cases(void)
{
	char	**matrix;

	matrix = malloc(sizeof(char *));
	if (!matrix)
		return (NULL);
	matrix[0] = NULL;
	return (matrix);
}
char	**ft_split(char const *s, char c)
{
	int		num_substrings;
	char	**matrix;

	if (!s)
		return (ft_handle_special_cases());
	num_substrings = ft_know_words(s, c);
	if (num_substrings == 0)
	 return (ft_handle_special_cases());
	matrix = malloc((num_substrings + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	if (!ft_fill_up_matrix(s, matrix, c))
		return (ft_free_memory(matrix));
	return (matrix);
}
