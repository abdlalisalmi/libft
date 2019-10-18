NAME= libft.a
CFLAGS= -Wall -Werror -Wextra
CC= gcc
SRC= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c Libft.h 

OBJS= *.o

all: $(NAME)

$(NAME) : $(OBJS)
	 @ar rc $(NAME) $(OBJS)

$(OBJS) : $(SRC)
	 $(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -rf $(OBJS)

fclean: 
	rm -rf *.a 

re: fclean all
