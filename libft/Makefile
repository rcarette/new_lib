# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcarette <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 20:31:54 by rcarette          #+#    #+#              #
#    Updated: 2017/06/09 07:16:51 by rcarette         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = gcc
FLAGS = -Wall -Werror -Wextra -g3 -fsanitize=address
AR = ar
ARFLAG = rc


NAME = libft.a
OBJ = *.o
SRCS = *.c

all : $(NAME)

$(NAME) :
	@$(GCC) -c $(SRCS) $(CFLAGS)
	@$(AR) $(ARFLAG) $(NAME) $(OBJ)

clean :
	rm -f $(OBJ);

fclean : clean
	rm -f $(NAME)

re : clean fclean all

