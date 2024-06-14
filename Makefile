# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: siligh <siligh@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/14 21:04:31 by siligh            #+#    #+#              #
#    Updated: 2024/06/14 21:04:53 by siligh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

OBJ = percent_c.o percent_d.o percent_p.o percent_s.o \
      percent_u.o percent_x.o percent_xx.o ft_printf.o


all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I./

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
