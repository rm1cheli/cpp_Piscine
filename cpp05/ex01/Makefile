# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 15:09:01 by rmicheli          #+#    #+#              #
#    Updated: 2022/06/27 15:09:02 by rmicheli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

FLAGS = -Wall -Wextra -Werror -std=c++98

CXX = @clang++ $(FLAGS)

SRCS =	main.cpp Bureaucrat.cpp Form.cpp\

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