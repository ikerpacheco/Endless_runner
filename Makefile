##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	src/my_runner.c \
		src/structs/background.c \
		src/structs/game.c \
		src/draw_sprites.c \
		src/structs/floor.c \
		src/structs/player.c \
		src/loop_movement.c \
		src/structs/buildings.c \
		src/structs/jump.c \
		src/structs/jump_sound.c \
		src/move_rect.c \
		src/reset_buildings.c \
		src/reset_floor.c \
		src/check_crash.c \
		src/my_putstr.c \
		src/my_putchar.c \
		src/structs/heart.c \
		src/structs/black_heart.c \
		src/structs/horizon.c \
		src/structs/mid.c \
		src/structs/floor_2.c \
		src/structs/buildings_2.c \
		src/structs/mid_2.c \
		src/structs/sound.c \
		src/structs/enemy.c \
		src/structs/horizon_2.c \
		src/structs/background_2.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_runner

CLIBS	= 	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -g3 $(OBJ) $(CLIBS) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all