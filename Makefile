# **************************************************************************** #
#                                                                              #
#                                                           :::      ::::::::  #
#  Makefile                                               :+:      :+:    :+:  #
#                                                       +:+ +:+         +:+    #
#  By: zcanales <zcanales@student.42urduliz.com>      +#+  +:+       +#+       #
#                                                   +#+#+#+#+#+   +#+          #
#  Created: 2021/07/22 12:11:18 by zcanales              #+#    #+#            #
#  Updated: 2021/08/02 11:21:53 by zcanales             ###   ########.fr      #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_BONUS = checker

SRC =	src/main.c\
		src/before_sort/check_errors.c\
		src/before_sort/create_list.c\
		src/commands/reverse.c\
		src/commands/rotate.c\
		src/commands/push_and_swap.c\
		src/push_swap_library/libft_push-swap.c\
		src/push_swap_library/free.c\
		src/sorting/check_already_sorted.c\
		src/sorting/pivot.c\
		src/sorting/main_sort.c\
		src/sorting/sort_2nbr.c\
		src/sorting/push_A_to_B.c\
		src/sorting/push_b_to_a.c\
		src/sorting/sort_3nbr.c\

SRC_BONUS =	bonus/src_bonus/main_bonus.c\
		bonus/src_bonus/before_sort/check_errors.c\
		bonus/src_bonus/before_sort/create_list.c\
		bonus/src_bonus/before_sort/take_instruction.c\
		bonus/src_bonus/commands/reverse_bonus.c\
		bonus/src_bonus/commands/rotate_bonus.c\
		bonus/src_bonus/commands/push_and_swap_bonus.c\
		bonus/src_bonus/free_bonus.c\
		bonus/src_bonus/check_already_sorted.c\
		bonus/src_bonus/get_next_line/get_next_line.c\
		bonus/src_bonus/get_next_line/get_next_line_utils.c\

OBJS = $(SRC:.c=.o)
OBJS_BONUS = $(SRC_BONUS:.c=.o)

LIB_A = Libft/libft.a\

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g 
AR = ar rcs
INCLUDES = include/

all : $(NAME)

$(NAME) : $(INCLUDES) $(LIB_A) $(SRC)
	$(CC) $(CFLAG) $(SRC) $(LIB_A) -o $(NAME)

$(LIB_A): Libft/*.c Libft/*.h
	$(MAKE) -C Libft/ bonus

$(OBJS) : $(SRC) 
	$(CC) $(CFLAGS) $(LIB_A) -g -c $< -o $@

bonus : bonus/$(INCLUDES) $(LIB_A) $(OBJS_BONUS)
	$(CC) $(CFLAG) $(SRC_BONUS) $(LIB_A) -o $(NAME_BONUS)

clean:
	make -C Libft/ clean
	rm -f $(OBJS_BONUS)
	rm -f $(OBJS)

fclean: clean
	@echo "Eliminar .o y .a"
	make -C Libft/	fclean
	rm -f $(NAME)
	rm -f $(NAME_BONUS)

re: fclean all 

.PHONY : all clean fclean re bonus
