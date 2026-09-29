# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: basayoub <basayoub@student.42amman.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/20 18:02:44 by basayoub          #+#    #+#              #
#    Updated: 2026/09/20 18:52:23 by basayoub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CF = -Wall -Wextra -Werror
SRC = ft_substr.c
OBJ = $(SRC:.c=.o)
finally : $(OBJ)
	$(CC) $(CF) $(OBJ)
fclean :
	rm -f $(OBJ)