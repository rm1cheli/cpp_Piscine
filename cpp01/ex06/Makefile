# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/17 14:00:05 by rmicheli          #+#    #+#              #
#    Updated: 2022/06/17 14:00:07 by rmicheli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

FLAGS = -Wall -Wextra -Werror

CXX = @clang++ $(FLAGS)

SRCS =	main.cpp Harl.cpp\

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