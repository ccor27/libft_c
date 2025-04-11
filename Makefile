#variables
TARGET = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

#final target
$(TARGET) : $(OBJ)
	ar rcs $(TARGET) $(OBJ)

#compilate the .c into .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJ)

fclean: clean
		rm -rf $(TARGET)

re: fclean all

.PHONY: all clean fclean re