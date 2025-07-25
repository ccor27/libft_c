#variables
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc
SRC = ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
      ft_isprint.c ft_memcpy.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c \
	  ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
	  ft_toupper.c ft_memmove.c ft_atoi.c ft_memchr.c ft_memchr.c ft_memcmp.c ft_substr.c \
	  ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_itoa.c ft_utoa.c ft_itoa_base.c

BONUS_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
            ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
			ft_lstmap_bonus.c

BONUS_OBJ = $(BONUS_SRC:.c=.o)

OBJ = $(SRC:.c=.o) $(BONUS_OBJ)

bonus: $(NAME)

all : $(NAME)

#final target
$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

#compilate the .c into .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
