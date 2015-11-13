# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberger <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/04 19:31:04 by mberger           #+#    #+#              #
#    Updated: 2015/06/02 00:07:40 by mberger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = gol

SRC =   main.c \
        key_handle.c \
        make_grille.c \
	tab_processing.c \
        dead_or_alive.c

OBJ = $(SRC:.c=.o)

GCC = gcc -Wall -Werror -Wextra

OFAST = -Ofast

HDDIRS = -I libgraph/includes -I libft/includes -I includes/ -I mlx/

LIBFTDIR = libft/

LIBGDIR = libgraph/

LIBDIRS = -L libgraph/ -lgraph -L libft/ -lft

MLXFLAGS = -framework OpenGL -framework AppKit mlx/libmlx.a

RM = rm -rf


PREV = \033[
NEXT = m

VERT = $(PREV)1;32$(NEXT)
ROUGE = $(PREV)0;31$(NEXT)
NEUTRE = $(PREV)0;$(NEXT)

DONE = echo "$(VERT)Done.$(NEUTRE)"


$(NAME): $(OBJ)
		@(cd $(LIBFTDIR) && $(MAKE))
		@(cd $(LIBGDIR) && $(MAKE))
		@(cd mlx && $(MAKE))
		$(GCC) $(OFAST) -o $(NAME) $(MLXFLAGS) $(LIBDIRS) $(HDDIRS) $(OBJ)

%.o:%.c
		$(GCC) -o $@ -c $< $(HDDIRS)

all: $(NAME)

nofast: $(OBJ)
		@(cd $(LIBFTDIR) && $(MAKE))
		@(cd $(LIBGDIR) && $(MAKE))
		@(cd mlx && $(MAKE))
		$(GCC) -o $(NAME) $(MLXFLAGS) $(LIBDIRS) $(HDDIRS) $(OBJ)

clean: 
		@(cd $(LIBFTDIR) && $(MAKE) clean)
		@(cd $(LIBGDIR) && $(MAKE) clean)
		@(cd mlx && $(MAKE) clean)
		$(RM) $(OBJ)

fclean: clean
		@(cd $(LIBFTDIR) && $(MAKE) fclean)
		@(cd $(LIBGDIR) && $(MAKE) fclean)
		@$(RM) $(NAME)

re:		fclean all	

launch: all; ./gol

life: all; ./gol life
seeds: all; ./gol seeds
brain: all; ./gol brain

.PHONY: .clean .fclean
