#ifndef LIBFT_H
# define LIBFT_H
# include <bsd/bsd.h>
# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
size_t				ft_strlcat(char *dest, char *src, size_t size);
size_t				ft_strlcpy(char *dest, char *src, size_t size);
size_t				ft_strlen(const char *s);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

#endif
