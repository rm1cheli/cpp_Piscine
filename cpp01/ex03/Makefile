# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/17 13:57:24 by rmicheli          #+#    #+#              #
#    Updated: 2022/06/17 13:57:24 by rmicheli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie_weapon

FLAGS = -Wall -Wextra -Werror

CXX = @clang++ $(FLAGS)

SRCS =	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp\

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