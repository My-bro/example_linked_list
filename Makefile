##
## EPITECH PROJECT, 2022
## BSQ Project
## File description:
## makefile
##

SRC 	= 		main.c\
				lib_basic/my_putstr.c\
				lib_basic/my_put_nbr.c\
				lib_basic/my_strcmp.c\
				lib_basic/my_putchar.c\
				lib_basic/my_str_toword_array.c\
				lib_basic/my_str_toword_array_bis.c\
				lib_basic/my_strlen.c\
				lib_basic/my_get_nbr.c\
				lib_basic/my_get_nbr_afterward.c\

OBJ     =       $(SRC:.c=.o)

NAME 	= 		prog

all: 	$(NAME)

$(NAME) : 		$(OBJ)
		gcc -o $(NAME) $(SRC) -g3

clean:
		rm -f $(OBJ) /lib/ *~

fclean:
		rm -f $(NAME)
re: fclean all
