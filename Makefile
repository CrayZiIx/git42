SRC = *.c

SRCO = $(SRC:*.c=*.o)

CC = gcc
FLAG = -Wall -Werror -Wextra
NAME = libft.a
COMP = $(CC) $(FLAG)

clean :
	rm -f prog
	rm -f *.o
	rm -f *.a

lib :
	$(COMP) -c $(SRC)
	ar rcs $(NAME) $(SRCO)

prog :
	$(COMP) main.c -L. libft.a -o prog
	./prog

finish :
	make clean
	make lib
	make prog

re :
	make finish
	