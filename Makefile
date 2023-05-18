NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -c
FLAGS = -Wall -Wextra -Werror

HEADER_FILE = $(NAME).h
SRC_FILES = ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_bzero.c \
			ft_memset.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memcmp.c \
			ft_memchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strdup.c \
			ft_calloc.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_putnbr_fd.c

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

test_%: $(NAME)
	$(CC) $(FLAGS) -L. -o $@.out $@.c -lbsd -l:$(NAME) -g3 
	./$@.out

rmtests:
	rm -f *.out
