#variables
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc
SRC = ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
      ft_isprint.c ft_memcpy.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
	  ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
	  ft_toupper.c
OBJ = $(SRC:.c=.o)

#final target
$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

#compilate the .c into .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re