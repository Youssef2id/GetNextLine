# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yidabdes <ussef.id@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/07 20:57:21 by yidabdes          #+#    #+#              #
#    Updated: 2018/10/21 14:22:00 by yidabdes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_C = *.c
INCLUDES_H = includes
FT_O = *.o

.PHONY: clean fclean re all

all: $(NAME)

$(FT_O):
	gcc -Wall -Wextra -Werror -c $(SRC_C) -I $(INCLUDES_H)

$(NAME): $(FT_O)
	ar rc $(NAME) $(FT_O)
	ranlib $(NAME)

clean:
	/bin/rm -rf $(FT_O)

fclean: clean
	/bin/rm -rf $(NAME)
	
re: fclean all
