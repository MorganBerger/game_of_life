# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberger <mberger@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/09 13:03:39 by mberger           #+#    #+#              #
#    Updated: 2015/03/21 20:57:53 by mberger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libgraph.a

SRC = put_circle.c put_line.c put_pixel.c set_color.c\
	  put_carre.c put_verline.c

FLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

HDPOS = -I includes/ -I ../ -I ../libft/includes

PREV = \033[
NEXT = m

VERT = $(PREV)1;32$(NEXT)
ROUGE = $(PREV)0;31$(NEXT)
NEUTRE = $(PREV)0;$(NEXT)

DONE = echo "$(VERT)Done.$(NEUTRE)"

all: $(NAME)

$(NAME): $(OBJ)
	@echo ""
	@echo -n '> Creation de la libgraphique : '
	@ar rc $(NAME) $(OBJ)
	@$(DONE)
	@echo ""
	@echo -n '> Indexation de la libgraphique : '
	@ranlib $(NAME)
	@$(DONE)
	@echo "$(ROUGE)"
	@echo "Libgraghique compilee !"
	@echo "$(NEUTRE)"

%.o: %.c
	@echo -n '> Creation de $@ : '
	@gcc -o $@ $(FLAGS) -c $< $(HDPOS)
	@$(DONE)

clean:
	@rm -rf $(OBJ)
	@echo -n '> Suppression des fichier .o : '
	@$(DONE)

fclean: clean
	@echo -n '> Suppression du fichier $(NAME) : '
	@$(DONE)
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean
