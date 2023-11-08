NAME = libftprintf.a
SRCS = ft_printf.c ft_switch.c ft_print_char.c ft_putchar.c ft_print_str.c ft_putstr.c \
	   ft_print_hex.c ft_num_len_base_positive.c ft_decimal_to_base_positive.c

#SRCS_BNS = 

SRCS_LIBFT = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			 ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memcpy.c ft_memmove.c \
			 ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
			 ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
			 ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
			 ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c  ft_putendl_fd.c \
			 ft_putnbr_fd.c ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			 ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			 ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c 

LIBFT_PATH = ./libft/

#SRCS_LIBFT = $(addprefix $(LITBFT_PATH), $(SRC_L))
OBJ_LIBFT = $(SRCS_LIBFT:.c=.o)

OBJ = $(SRCS:.c=.o) $(addprefix $(LIBFT_PATH), $(OBJ_LIBFT))

#OBJ_BNS = $(SRCS_BNS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) 
	@ar -crsT $(NAME) $(OBJ)

#bonus: .bonus
#	
#.bonus: $(OBJ_BNS)
#	ar -crs $(NAME) $(OBJ_BNS)
#	@touch .bonus

%.o: %.c
	@cc $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(OBJ_BNS)
	@rm -rf .bonus

fclean: clean
	rm -f $(NAME)

re: fclean all

#REMOVE ME!!!!!
#REMOVE ME!!!!!
#REMOVE ME!!!!!
#REMOVE ME!!!!!
c:	all
	@cc main.c libftprintf.a
	@./a.out

f: fclean