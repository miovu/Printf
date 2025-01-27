NAME = libftprintf.a

SOURCES = ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbr_hex.c \
			ft_putnbr_un_fd.c ft_putptr_fd.c ft_putstr.c

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $@ $?
	echo "Creating library" $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJECTS) 
	echo "Removing object files"

fclean: clean
	rm -f $(NAME)
	echo "Removing library $(NAME)"

re: fclean all
	echo "Rebuilding library" 

.PHONY: all clean fclean re