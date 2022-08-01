# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/17 13:56:23 by rmicheli          #+#    #+#              #
#    Updated: 2022/06/17 13:56:34 by rmicheli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

FLAGS = -Wall -Wextra -Werror

CXX = @clang++ $(FLAGS)

SRCS =	main.cpp newZombie.cpp randomChump.cpp Zombie.cpp\

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