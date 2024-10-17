NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCs = ft_printf.c \
	   ft_base.c	\
	   ft_printf_utils.c	\

OBJS = $(SRCs:.c=.o)

all: $(NAME)
	@echo "Todo OK!"

$(NAME): $(OBJS)
	@ar -crs $(NAME) $(OBJS)
	@ranlib $(NAME)

%.o : %.c
	@$(CC) $(CFLAGS) -c -o $@ $<
clean:
	@rm -f $(OBJS)
	@echo "Borrado todos los .o"

fclean: clean
	@rm -f $(NAME)
	@echo " Borrado todos los .o y $(NAME)"

re: fclean all
	@echo " Borrado todo y creado el $(NAME)"

.PHONY: clean fclean re all
