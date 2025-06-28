# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gribeiro <gribeiro@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/28 01:28:52 by gribeiro          #+#    #+#              #
#    Updated: 2025/06/28 02:05:42 by gribeiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

#	Compiler
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

#	Files
SRC			= megaphone.cpp
OBJ			= $(SRC:.cpp=.o)

#	Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: all
	@./megaphone 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re