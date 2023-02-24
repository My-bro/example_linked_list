##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## first try of makefill
##

SRC     =   flag_o_p.c  flag_u_p.c  flag_upx_p.c  my_putchar_p.c\
	my_putstr.c flag_b.c  flag_p.c   flag_ups.c flag_x.c\
	my_put_nbr.c    my_putstr_p.c flag_b_p.c  flag_p_p.c\
	flag_ups_p.c  flag_x_p.c my_put_nbr_p.c my_strcmp.c\
	flag_o.c    flag_u.c  flag_upx.c   my_putchar.c\
	my_putprct_p.c	long_int_digits.c flag_e_p.c flag_e.c\
	flag_upe_p.c flag_upe.c flag_f_p.c flag_f.c\
	my_printf.c my_str_toword_array.c my_strlen.c nb_case.c\
	fs_open.c d_nb_case.c goodstr.c char_to_int.c print_thebsq.c\

OBJ     =       $(SRC:.c=.o)

NAME    =       libmy.a

all:    $(NAME)

$(NAME):        $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../../
clean:
	$(RM) $(OBJ)
	$(RM) ../../$(NAME)

fclean: clean
	$(RM) $(NAME)

re:     fclean all
