SRCS = ft_bzero.c \
    ft_isalnum.c \
    ft_isalpha.c \
    ft_isascii.c \
    ft_isdigit.c \
    ft_isprint.c \
    ft_memchr.c \
    ft_memcpy.c \
    ft_memmove.c \
    ft_memset.c \
    ft_memcmp.c \
    ft_strchr.c \
    ft_strlcat.c \
    ft_strlcpy.c \
    ft_strlen.c \
    ft_strncmp.c \
    ft_strrchr.c \
    ft_tolower.c \
    ft_toupper.c \
    ft_strnstr.c \
    ft_atoi.c \
    ft_calloc.c \
    ft_strdup.c \
    ft_substr.c \
    ft_strjoin.c \
    ft_strtrim.c \
    ft_split.c \
    ft_itoa.c \
    ft_strmapi.c \

# Uncomment and update the following line if you want to add bonus functions
# BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

NAME = libft.a
LIBC = ar -rcs
OBJS = ${SRCS:.c=.o}
# OBJS_B = ${BONUS:.c=.o}
CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -f
INCS = .

all: ${NAME}

${NAME} : ${OBJS}
	${LIBC} ${NAME} ${OBJS}

%.o: %.c
	${CC} ${FLAGS} -c $< -o $@ -I ${INCS}



clean:
	${RM} ${OBJS} ${OBJS_B}

fclean: clean
	${RM} ${NAME}

re: fclean all
