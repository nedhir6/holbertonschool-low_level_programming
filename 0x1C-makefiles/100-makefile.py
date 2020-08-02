SRC = main.c holberton.c
CC  = gcc
OBJ = $(SRC:.c=.o)
NAME    = holberton
CFLAGS  = -Wall -Werror -Wextra -pedantic
all:: m.h $(OBJ)
	$(CC) $(OBJ) -o $(NAME)
clean::
	$(RM) -f *~ $(NAME)
oclean::
	$(RM) -f $(OBJ)
fclean:: clean oclean
re:: oclean all
