# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/02 10:02:09 by msarigul          #+#    #+#              #
#    Updated: 2022/12/15 10:13:13 by msarigul         ###   ########.tr        #
#                                                                              #
# **************************************************************************** #

NAME		:= push_swap.a 

OBJDIR		:= objects
LIBFT		:= $(OBJDIR)/libft.a
FT_PRINTF	:= $(OBJDIR)/ft_printf.a
ROTATE		:= $(OBJDIR)/rotate.a
SORT		:= $(OBJDIR)/sort.a
QUICK		:= $(OBJDIR)/quick.a
ARG			:= $(OBJDIR)/arg.a
UTILS		:= $(OBJEDIR)/utils.a
CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror -I ./include

$(NAME): $(OBJDIR) $(LIBFT) $(FT_PRINTF) $(ARG) $(SORT) $(ROTATE) $(UTILS) $(QUICK)
	@ar -rcs $(NAME) $(OBJDIR)/*.o 
	@gcc ./src/push_swap.c push_swap.a -I ./include -o push_swap

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(LIBFT):
	@echo "LIBFT"
	@make -C libft

$(FT_PRINTF):
	@echo "FT_PRINTF"
	@make -C ft_printf

$(ROTATE):
	@echo "ROTATE"
	@make -C src/rotate

$(SORT):
	@echo "SORT"
	@make -C src/sort

$(ARG):
	@echo "ARG"
	@make -C src/arg

$(UTILS):
	@echo "UTILS"
	@make -C src/utils

$(QUICK):
	@echo "QUICK"
	@make -C src/sort/quick_sort

all: $(NAME)

clean:
	@rm -f $(OBJDIR)/*.o

fclean: clean
	@rm -f $(NAME)
	@rm -rf $(OBJDIR)
	@rm push_swap

re: fclean all

v:
	@pip3 install push_swap_gui
	@python3 -m push_swap_gui

.PHONY: all re clean fclean m
