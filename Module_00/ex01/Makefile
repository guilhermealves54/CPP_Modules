# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/28 01:28:52 by gribeiro          #+#    #+#              #
#    Updated: 2025/06/30 01:44:58 by gribeiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook

#	Compiler
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

#	Files
SRC			= $(addprefix src/, main.cpp phonebook.cpp contact.cpp)

OBJ			= $(SRC:.cpp=.o)

#	Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: all
	@./phonebook

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re