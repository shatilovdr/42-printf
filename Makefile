NAME = libftprintf.a
SRCS = ft_printf.c ft_switch.c ft_print_char.c ft_print_str.c ft_print_ptr.c 
	   

#SRCS_BNS = 

OBJ = $(SRCS:.c=.o) 

#OBJ_BNS = $(SRCS_BNS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar -crsT $(NAME) $(OBJ) libft.a

#bonus: .bonus
#	
#.bonus: $(OBJ_BNS)
#	ar -crs $(NAME) $(OBJ_BNS)
#	@touch .bonus

%.o: %.c
	cc $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJ_BNS)
	@rm -rf .bonus

fclean: clean
	rm -f $(NAME)

re: fclean all

cc:
	@cc ft_printf.c libftprintf.a libft.a
	@./a.out