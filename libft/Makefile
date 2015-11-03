# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberger <mberger@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/09 13:03:39 by mberger           #+#    #+#              #
#    Updated: 2015/03/21 20:57:01 by mberger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c \
	  ft_bzero.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_lstadd.c \
	  ft_lstdel.c \
	  ft_lstdelone.c \
	  ft_lstiter.c \
	  ft_lstnew.c \
	  ft_memalloc.c \
	  ft_memccpy.c \
  	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memdel.c \
	  ft_memmove.c \
	  ft_memset.c \
  	  ft_putchar.c \
	  ft_putchar_fd.c \
	  ft_putendl.c \
	  ft_putendl_fd.c \
	  ft_putnbr.c \
	  ft_putnbr_fd.c \
	  ft_putstr.c \
	  ft_putstr_fd.c \
	  ft_strcat.c \
	  ft_strchr.c \
	  ft_strclr.c \
	  ft_strcmp.c \
	  ft_strcpy.c \
	  ft_strdel.c \
	  ft_strdup.c \
	  ft_strequ.c \
	  ft_striter.c \
	  ft_striteri.c \
	  ft_strlcat.c \
	  ft_strlen.c \
	  ft_strmap.c \
	  ft_strmapi.c \
	  ft_strncat.c \
	  ft_strncmp.c \
	  ft_strncpy.c \
	  ft_strnequ.c \
	  ft_strnew.c \
	  ft_strnstr.c \
	  ft_strrchr.c \
	  ft_strstr.c \
	  ft_strsub.c \
	  ft_strtrim.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_itoa.c \
	  ft_strjoin.c \
	  ft_strsplit.c \
	  ft_strtrim.c \
	  ft_lstmap.c \
	  ft_swap.c \
	  ft_putnbrendl.c \
	  ft_nbnew.c \
	  ft_power.c \
	  ft_strrev.c \
	  ft_realloc.c \
	  ft_strpos.c \
	  ft_nbsplit.c \
	  get_next_line.c \
	  ft_isnbr.c \
	  show_int_tab.c

FLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)

HDPOS = -I includes

PREV = \033[
NEXT = m

VERT = $(PREV)1;32$(NEXT)
ROUGE = $(PREV)0;31$(NEXT)
NEUTRE = $(PREV)0;$(NEXT)


DONE = echo "$(VERT)Done.$(NEUTRE)"

all: $(NAME)

$(NAME): $(OBJ)
	@echo ""
	@echo -n '> Creation de la libft : '
	@ar rc $(NAME) $(OBJ)
	@$(DONE)
	@echo ""
	@echo -n '> Indexation de la libft : '
	@ranlib $(NAME)
	@$(DONE)
	@echo "$(ROUGE)"
	@echo "Libft compilee !"
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
