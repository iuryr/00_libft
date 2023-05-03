NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -c

HEADER_FILE = $(NAME).h
SRC_FILES = ft_putchar_fd.c
OBJ_FILES = $(SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar -crs $(NAME) $(OBJ_FILES)

%.o : %.c 
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
