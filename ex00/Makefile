# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kingstephane <kingstephane@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/24 19:53:01 by kingstephan       #+#    #+#              #
#    Updated: 2025/12/26 01:49:14 by kingstephan      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRCS = megaphone.cpp

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@echo "nothing to clean"

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re