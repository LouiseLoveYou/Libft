SRCS =  ft_memset.c         \
        ft_bzero.c          \
        ft_memcpy.c         \
        ft_memmove.c        \
        ft_memchr.c         \
        ft_memcmp.c         \
        ft_strlen.c         \
        ft_isalpha.c        \
        ft_isdigit.c        \
        ft_isalnum.c        \
        ft_isascii.c        \
        ft_isprint.c        \
        ft_toupper.c        \
        ft_tolower.c        \
        ft_strchr.c         \
        ft_strrchr.c        \
        ft_strncmp.c        \
        ft_strlcpy.c        \
        ft_strlcat.c        \
        ft_strnstr.c        \
        ft_atoi.c           \
        ft_calloc.c         \
        ft_strdup.c         \
        ft_strjoin.c        \
        ft_substr.c         \
        ft_strtrim.c
        
NAME = libft.a

OBJS = $(SRCS:.c=.o)

CC = cc

CC_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar r $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CC_FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re





