##
## Makefile for  in /home/maslak_f/libmy/maslak_f/libmy_01
## 
## Made by MASLAK Franck
## Login   <maslak_f@etna-alternance.net>
## 
## Started on  Mon Mar 30 10:12:54 2015 MASLAK Franck
## Last update Fri Apr  3 09:12:27 2015 MASLAK Franck
##

CC =	gcc
NAME =	libmy.a
SRC =	my_getnbr.c	\
	my_put_nbr.c	\
	my_strcmp.c	\
	my_strncat.c	\
	my_strstr.c	\
	my_isneg.c	\
	my_putstr.c	\
	my_strcpy.c	\
	my_strncmp.c	\
	my_swap.c	\
	my_putchar.c	\
	my_strcat.c	\
	my_strlen.c	\
	my_strncpy.c	\
	my_strdup.c	\
	my_str_to_wordtab.c	
OBJ =	$(SRC:%.c=%.o)
RM =	rm -rf

$(NAME):	$(OBJ)
		ar r $(NAME) *.o
		ranlib $(NAME)

all:		$(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME) 
