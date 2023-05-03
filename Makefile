NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -c
FLAGS = -Wall -Wextra -Werror

HEADER_FILE = $(NAME).h
SRC_FILES = ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c
OBJ_FILES = $(SRC_FILES:.c=.o)

TEST_SRC = $(foreach file, $(SRC_FILES), test_$(file))
TEST_OBJ = $(TEST_SRC:.c=.o)

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

test_%.c: $(NAME)
	$(CC) $(FLAGS) -L. $@ -l:$(NAME)
	./a.out
	rm -f ./a.out
