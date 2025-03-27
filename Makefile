# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekuchel <ekuchel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 14:12:26 by ekuchel           #+#    #+#              #
#    Updated: 2023/05/19 11:20:57 by ekuchel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

SRC =	pipex.c \
		utils.c \
		ft_split_pipex.c \
		paths.c

SRC_BONUS = bonus.c utils.c

LIBFT = ./lib/libft/libft.a

CFLAGS = -Wall -Werror -Wextra #-fsanitize=address
RM = rm -rf

all: $(NAME)

$(NAME): $(LIBFT) $(SRC)
	$(CC) $(CFLAGS) -I./lib $(LIBFT) $(SRC) -o $(NAME)

$(LIBFT):
	make -s -C ./lib/libft/

clean:
	make clean -C ./lib/libft/

fclean:
	make fclean -C ./lib/libft/
	$(RM) -f $(NAME)

re: fclean all

.PHONY : all re clean fclean

# Name Age
# Bob 35
# Sam 25
# Mary 34
# John 40
