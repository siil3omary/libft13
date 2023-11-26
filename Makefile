SRCS = ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c
BONUS =  ft_lstadd_front.c ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_lstadd_back.c ft_lstdelone.c ft_lstiter.c ft_lstclear.c ft_lstmap.c
NAME = libft.a
LIBC = ar -rcs
OBJS = ${SRCS:.c=.o}
OBJS_B = ${BONUS:.c=.o}
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
INCS = .
AUTHOR	= aelomari

#=== Colors ===
NO_COLOR = \033[0m
GRAY = \033[0;1;3;90m
RED = \033[0;1;3;91m
GREEN = \033[0;1;3;92m
YELLOW = \033[0;1;3;33m
BLUE = \033[0;1;3;34m
MAGENTA = \033[35m
CYAN = \033[36m

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

bonus: ${OBJS} ${OBJS_B}
	${LIBC} ${NAME} ${OBJS} ${OBJS_B}
	@printf "$(GREEN)\n- Your bonus library is ready ✅🥳\n$(NO_COLOR)"

all: header ${NAME}
	@printf "$(GREEN)\n- Your library is ready ✅🥳\n$(NO_COLOR)"

clean: header
	${RM} ${OBJS} ${OBJS_B}
	@printf "$(BLUE)clean\t:\t\t\t$(GREEN)[✓]$(NO_COLOR)\n"

fclean: header clean
	${RM} ${NAME}
	@printf "$(BLUE)fclean\t:\t\t\t$(GREEN)[✓]$(NO_COLOR)\n\n"

re: header fclean all

.PHONY: all clean fclean bonus re

header :

	@printf "$(GREEN)"
	@@echo "_______________bbbbbbbb________________________________________________________";
	@echo "lllllll___iiii_b::::::b_______________ffffffffffffffff___________tttt__________";
	@echo "l:::::l__i::::ib::::::b______________f::::::::::::::::f_______ttt:::t__________";
	@echo "l:::::l___iiii_b::::::b_____________f::::::::::::::::::f______t:::::t__________";
	@echo "l:::::l_________b:::::b_____________f::::::fffffff:::::f______t:::::t__________";
	@echo "_l::::l_iiiiiii_b:::::bbbbbbbbb_____f:::::f_______ffffffttttttt:::::ttttttt____";
	@echo "_l::::l_i:::::i_b::::::::::::::bb___f:::::f_____________t:::::::::::::::::t____";
	@echo "_l::::l__i::::i_b::::::::::::::::b_f:::::::ffffff_______t:::::::::::::::::t____";
	@echo "_l::::l__i::::i_b:::::bbbbb:::::::bf::::::::::::f_______tttttt:::::::tttttt____";
	@echo "_l::::l__i::::i_b:::::b____b::::::bf::::::::::::f_____________t:::::t__________";
	@echo "_l::::l__i::::i_b:::::b_____b:::::bf:::::::ffffff_____________t:::::t__________";
	@echo "_l::::l__i::::i_b:::::b_____b:::::b_f:::::f___________________t:::::t__________";
	@echo "_l::::l__i::::i_b:::::b_____b:::::b_f:::::f___________________t:::::t____tttttt";
	@echo "l::::::li::::::ib:::::bbbbbb::::::bf:::::::f__________________t::::::tttt:::::t";
	@echo "l::::::li::::::ib::::::::::::::::b_f:::::::f__________________tt::::::::::::::t";
	@echo "l::::::li::::::ib:::::::::::::::b__f:::::::f____________________tt:::::::::::tt";
	@echo "lllllllliiiiiiiibbbbbbbbbbbbbbbb___fffffffff______________________ttttttttttt__";
	@echo "_______________________________________________________________________________";
	@echo "_______________________________________________________________________________";
	@echo "_______________________________________________________________________________";
	@echo "_______________________________________________________________________________";               
	@printf  "$(MAGENTA)Author\t: $(GRAY)$(AUTHOR)\n"
	@printf  "$(MAGENTA)CC    \t: $(CYAN)$(CC)\n"
	@printf  "$(MAGENTA)Flags \t: $(CYAN)$(CFLAGS)\n"