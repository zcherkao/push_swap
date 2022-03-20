# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zcherkao <zcherkao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/01 14:30:01 by yachehbo          #+#    #+#              #
#    Updated: 2022/03/19 15:21:46 by zcherkao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_BONUS = checker

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror

SRCS = push_swap.c lst/ft_lstadd_back.c  \
lst/ft_lstsize.c lst/ft_lstadd_front.c lst/ft_lstlast.c lst/ft_lstnew.c \
operations/do_pa.c  operations/do_pb.c  operations/do_ra.c  operations/do_rb.c \
operations/do_rr.c  operations/do_rra.c operations/do_rrb.c operations/do_rrr.c \
operations/do_sa.c  operations/do_sb.c  operations/do_ss.c operations/Action/ft_pre_last.c\
operations/Action/remove_first.c operations/Action/remove_last.c \
operations/Action/reverse_rotate.c operations/Action/rotate.c \
operations/Action/swap.c src/ft_atoi.c src/ft_isnumber.c src/ft_memcmp.c src/ft_strlen.c src/ft_split.c \
check_error/check_double.c  check_error/check_integer.c check_error/check_sort.c \
check_error/check_error.c algo/sort_three.c algo/utils_1.c algo/sort_two.c algo/sort_five.c \
algo/sort_all.c algo/utils.c algo/sort_four.c 

OBJS = $(SRCS:.c=.o)

all : $(NAME)

bonus : $(NAME_BONUS)

$(NAME): push_swap.h $(OBJS)
	@cc $(CFLAGS) -o $(NAME)  $(OBJS) 

SRCS_1 = lst/ft_lstadd_back.c  checker_1.c \
lst/ft_lstsize.c lst/ft_lstadd_front.c lst/ft_lstlast.c lst/ft_lstnew.c \
operations/do_pa.c  operations/do_pb.c  operations/do_ra.c  operations/do_rb.c \
operations/do_rr.c  operations/do_rra.c operations/do_rrb.c operations/do_rrr.c \
operations/do_sa.c  operations/do_sb.c  operations/do_ss.c operations/Action/ft_pre_last.c\
operations/Action/remove_first.c operations/Action/remove_last.c \
operations/Action/reverse_rotate.c operations/Action/rotate.c \
operations/Action/swap.c src/ft_atoi.c src/ft_isnumber.c src/ft_memcmp.c src/ft_strlen.c src/ft_split.c \
check_error/check_double.c  check_error/check_integer.c check_error/check_sort.c \
check_error/check_error.c algo/sort_three.c algo/utils_1.c algo/sort_two.c algo/sort_five.c \
algo/sort_all.c algo/utils.c algo/sort_four.c get_next_line/get_next_line.c \
get_next_line/get_next_line_utils.c

OBJS_1 = $(SRCS_1:.c=.o)

$(NAME_BONUS): push_swap.h $(OBJS_1)
	cc $(CFLAGS) -o $(NAME_BONUS) $(OBJS_1)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS) $(OBJS_1)

fclean : clean
	rm -rf $(NAME) $(NAME_BONUS)
	
re : fclean all

.PHONY: all clean fclean re