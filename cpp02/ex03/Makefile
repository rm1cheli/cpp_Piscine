# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/21 12:50:10 by rmicheli          #+#    #+#              #
#    Updated: 2022/06/21 12:50:15 by rmicheli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

FLAGS = -Wall -Wextra -Werror -std=c++98

CXX = @clang++ $(FLAGS)

SRCS =	main.cpp Fixed.cpp bsp.cpp Point.cpp\

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