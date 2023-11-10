NAME = libftprintf.a

LIBFTPATH = ./libft/

SRCS = ft_printf.c ft_switch.c ft_print_char.c ft_putchar.c ft_print_str.c ft_putstr.c \
	   ft_print_hex.c ft_numlenbase.c ft_dec_tobase.c ft_print_dec.c \

SRCS_LIBFT = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
  ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
  ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
  ft_atoi.c ft_calloc.c ft_strdup.c \
  ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
  ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
  ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
  ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
  ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
	
OBJS_LIBFT = $(SRCS_LIBFT:.c=.o)

OBJS = $(SRCS:.c=.o) $(addprefix $(LIBFTPATH), $(OBJS_LIBFT))

CC = clang
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all


c:	all
	cc main.c $(NAME)
	./a.out

.PHONY: all, clean, fclean, re