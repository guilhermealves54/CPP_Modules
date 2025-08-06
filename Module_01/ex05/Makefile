# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gribeiro <gribeiro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/28 01:28:52 by gribeiro          #+#    #+#              #
#    Updated: 2025/08/06 13:48:01 by gribeiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= sed

#	Compiler
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

#	Files
SRC			= $(addprefix src/, main.cpp)

OBJ			= $(SRC:.cpp=.o)

#	Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: all
	@echo "Hello World!" > infile.txt
	@./sed infile.txt "World" "Duck"

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re