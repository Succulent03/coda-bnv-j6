CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = main.c swap_ptr.c
OBJ = $(SRC:.c=.o)
NAME = program

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re