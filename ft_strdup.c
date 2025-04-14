#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_copy;
	size_t	s_size;

	// verify if the s is not null, if it so return null
	if (s == NULL)
		return (NULL);
	s_size = ft_strlen(s);
	// use malloc to allocate memory to the string and the '\0'
	s_copy = malloc(s_size + 1);
	// validate if there are enough memory
	if (s_copy == NULL)
		return (NULL);
	// copy the characters using memcpy
	ft_memcpy(s_copy, s, s_size + 1);
	// return the pointer
	return (s_copy);
}

int	main(void)
{
	char *original = "Hola mundo!";
	char *duplicado = ft_strdup(original);

	if (duplicado)
		printf("Original: \"%s\"\nDuplicado: \"%s\"\n", original, duplicado);
	else
		printf("Error: ft_strdup devolvió NULL\n");

	free(duplicado);

    char *original2 = "";
char *duplicado2 = ft_strdup(original2);

if (duplicado2)
    printf("Original: \"%s\"\nDuplicado: \"%s\"\n", original2, duplicado2);
else
    printf("Error: ft_strdup devolvió NULL para cadena vacía\n");

free(duplicado2);

char *original3 = "Línea1\nLínea2\t\t♥";
char *duplicado3 = ft_strdup(original3);

if (duplicado)
    printf("Original: \"%s\"\nDuplicado: \"%s\"\n", original3, duplicado3);
else
    printf("Error: ft_strdup devolvió NULL\n");

free(duplicado3);

char *duplicado4 = ft_strdup(NULL);

if (duplicado4 == NULL)
    printf("✔ ft_strdup devolvió NULL como se esperaba para entrada NULL.\n");
else {
    printf("✘ Error: Se esperaba NULL, pero se obtuvo: %s\n", duplicado4);
    free(duplicado4);
}

}