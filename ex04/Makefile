# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kalhanaw <kalhanaw@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/02 10:01:16 by kalhanaw          #+#    #+#              #
#    Updated: 2026/04/06 19:00:38 by kalhanaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fakeSed
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =	main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re