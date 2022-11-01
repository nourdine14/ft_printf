NAME = libftprintf.a

SRCS = ft_printf.c \
	ft_printinsignedint.c \
	ft_printphd.c \
	ft_putchar.c \
	ft_puthexadecimal.c \
	ft_putnbr.c \
	ft_putstr.c

OBJ = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

AR = ar -rcs

all : OBJ