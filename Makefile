NAME =    libftprintf.a

SRCS = ft_putstr.c \
	ft_printphd.c \
	ft_putchar.c \
	ft_puthexadecimal.c \
	ft_putnbr.c \
	ft_printf.c \
	ft_printunsignedint.c

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = libftprintf.h

RM = rm -rf

AR = @ar -rcs

all:$(NAME)

$(NAME):$(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo "header file created"

%.o:%.c $(HEADER)
	@cc $(FLAGS) -c $< -o $@
	@echo "objects created"

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all