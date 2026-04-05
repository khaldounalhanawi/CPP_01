# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/02 10:01:16 by kalhanaw          #+#    #+#              #
#    Updated: 2026/04/05 16:21:30 by kalhanaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = attack
CC = c++
HEADER = HumanA.hpp \
		 HumanB.hpp \
		 Weapon.hpp
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =	HumanA.cpp \
		HumanB.cpp \
		main.cpp \
		Weapon.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re