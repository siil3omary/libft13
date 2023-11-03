FILES = *.c
CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: 
	${CC} ${CFLAGS} ${FILES} -c 
clean: 
	rm -f *.o
