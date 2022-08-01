# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/17 13:56:48 by rmicheli          #+#    #+#              #
#    Updated: 2022/06/17 13:56:50 by rmicheli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

FLAGS = -Wall -Wextra -Werror

CXX = @clang++ $(FLAGS)

SRCS =	main.cpp ZombieHorde.cpp Zombie.cpp

OBJ = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
			$(CXX) $(OBJ) -o $(NAME)
			
clean:
		@rm -rf $(OBJ)

fclean: clean
		@rm -rf $(NAME)

re: fclean all

.PHONY: all fclean clean re