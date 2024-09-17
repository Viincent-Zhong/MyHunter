##
## EPITECH PROJECT, 2020
## makefile
## File description:
## Makefile
##

SRC = main.c	\
	deal_bg_cursor.c	\
	display_sprite.c	\
	my_hunter.c	\
	create_pokemons.c	\
	deal_event.c	\
	deal_screen.c	\
	deal_spritesheet.c	\
	animate_bg_cursor.c	\
	int_to_str.c	\
	pokemon_out.c	\
	initiate.c	\
	create_hp_trainer.c	\
	initiate_pokemon.c

OBJ = $(SRC:.c=.o)

NAME = test

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o a.out $(OBJ) -I ./ -l csfml-graphics -l csfml-audio -l csfml-system

clean:
		rm a.out
		rm $(OBJ)

re:	clean all