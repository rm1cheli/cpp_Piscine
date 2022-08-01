# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmicheli <rmicheli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/26 15:19:40 by rmicheli          #+#    #+#              #
#    Updated: 2022/06/26 15:19:41 by rmicheli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal

FLAGS = -Wall -Wextra -Werror

CXX = @clang++ $(FLAGS)

SRCS =	AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp main.cpp\

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