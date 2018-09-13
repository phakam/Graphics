NAME = wolf3D

SRC = main.c\
	  ft_count.c\
	  get_xy.c\
	  get_map.c\
	  get_next_line.c\
	  calculate.c\
	  floor_and_ceiling.c\
	  sdl_draw.c\
	  movement.c\

FLAGS = -g -Wall -Werror -Wextra

LIB = ./libft/libft.a

INCLUDES = -I./libft/ -I./includes/

OBJS = $(SRC:.c=o);

all: $(NAME)

$(NAME):
		make -C libft/ fclean && make -C libft/
		gcc $(SRC) $(FLAGS) -lSDL2 -lSDL2main -lm $(INCLUDES) $(LIB) -o $(NAME)

clean:
		/bin/rm -f $(OBJS)
		make -C libft/ clean

fclean:
		/bin/rm -f $(NAME)
		/bin/rm -f *.o
		/bin/rm -f libft/*.o
		/bin/rm -f libft/libft.a

re: fclean all
