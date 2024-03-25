# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kel-malt <kel-malt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 12:31:43 by kel-malt          #+#    #+#              #
#    Updated: 2024/03/25 12:04:32 by kel-malt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

LIBFT		= ./libft

SRCS		= ft_printf.c

FUNCTIONS_PATH	= functions/
FUNCTIONS		= $(addprefix $(FUNCTIONS_PATH), ft_put_char.c ft_put_dec.c \
					ft_put_hex_lower.c ft_put_hex_upper.c ft_put_ptr.c \
					ft_put_str.c ft_put_unsignedint.c)

SURPL_O		= ft_put_char.o ft_put_dec.o ft_put_hex_lower.o  ft_put_hex_upper.o \
				ft_put_ptr.o ft_put_str.o ft_put_unsignedint.o

CC = cc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o) $(FUNCTIONS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) bonus -C ./libft
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(OBJS) $(SURPL_O)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all