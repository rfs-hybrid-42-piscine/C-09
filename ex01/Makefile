# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/11 15:48:19 by maaugust          #+#    #+#              #
#    Updated: 2026/02/26 04:13:19 by maaugust         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ============================ PROJECT FILE NAMES ============================ #
NAME        = libft.a

# ============================== COMPILER FLAGS ============================== #
CC          = cc
CFLAGS      = -Wall -Wextra -Werror
INCLUDES    = -Iincludes
AR          = ar rcs
RM          = rm -f

# =============================== SOURCE FILES =============================== #
SRC_PATH    = srcs
SRC         = $(SRC_PATH)/ft_putchar.c \
              $(SRC_PATH)/ft_putstr.c \
              $(SRC_PATH)/ft_strcmp.c \
              $(SRC_PATH)/ft_strlen.c \
              $(SRC_PATH)/ft_swap.c

OBJ         = $(SRC:.c=.o)

# ============================ COMPILATION RULES ============================= #
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# =============================== BUILD TARGETS ============================== #
all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# ============================== CLEAN TARGETS =============================== #
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
