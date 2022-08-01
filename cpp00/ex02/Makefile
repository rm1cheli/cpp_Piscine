# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 12:31:42 by rmicheli          #+#    #+#              #
#    Updated: 2022/06/13 12:31:43 by rmicheli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

FLAGS = -Wall -Wextra -Werror -std=c++98

CXX = @clang++ $(FLAGS)

SRCS =	Account.cpp\
		tests.cpp\

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