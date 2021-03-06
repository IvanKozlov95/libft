# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 13:22:14 by ikozlov           #+#    #+#              #
#    Updated: 2019/07/15 15:37:38 by ivankozlov       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# colors
NO_COLOR=\x1b[0m
OK_COLOR=\x1b[32;01m
ERROR_COLOR=\x1b[31;01m
WARN_COLOR=\x1b[33;01m

# directories
SRC_DIR = srcs/
INC_DIR = includes/
OBJ_DIR = obj/

MATH_DIR		= math/
LIST_DIR		= list/
DLIST_DIR		= dlist/
CHAR_DIR		= chars/
MATRIX_DIR		= matrix/
MEMORY_DIR		= memory/
OUTPUT_DIR		= output/
NUMBERS_DIR		= numbers/
STRINGS_DIR		= strings/
PRINTF_DIR		= ft_printf/
GNL_DIR			= get_next_line/
STRUCTURES_DIR	= structures/
DSTRING_DIR		= dstring/
DICT_DIR		= dictionary/
BTREE_DIR		= btree/

# compiler
ifeq (${C_ENV}, DEV)
	FLAGS = -g
else ifeq (${C_ENV}, PROD)
	FLAGS = -Wall -Wextra -Werror
endif
CFLAGS = $(FLAGS)
INCLUDES = $(INC_DIR)

# files
SRC := $(wildcard $(SRC_DIR)$(GNL_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(CHAR_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(NUMBERS_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(MATH_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(OUTPUT_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(LIST_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(DLIST_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(MEMORY_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(PRINTF_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(STRINGS_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(MATRIX_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(STRUCTURES_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(DSTRING_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(DICT_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(BTREE_DIR)*.c)
OBJ := $(notdir $(SRC))
OBJ := $(patsubst %, $(OBJ_DIR)%, $(OBJ:.c=.o))

.PHONY: all clean fclean re

all: 
	@make $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "$(OK_COLOR)[INFO] Library libft created$(NO_COLOR)"

$(OBJ_DIR)%.o: $(SRC_DIR)*/%.c
	@mkdir -p $(OBJ_DIR)
	@echo "$(WARN_COLOR)Compiling $< $(NO_COLOR)"
	@gcc $(CFLAGS) -I $(INCLUDES) -c $< -o $@ 2> temp.log || touch temp.error
	@if test -s temp.log; then echo "$(ERROR_COLOR)Error in $<\n$(NO_COLOR)" && cat temp.log; fi;
	@rm -f temp.error temp.log

clean:
	@if [ -d "./$(OBJ_DIR)" ]; then\
		rm -rf $(OBJ_DIR);\
		echo "$(OK_COLOR)[INFO] Object folder removed$(NO_COLOR)";\
	fi;

fclean: clean
	@if test -e $(NAME); then\
		/bin/rm -f $(NAME);\
		echo "$(OK_COLOR)[INFO] Library libft removed$(NO_COLOR)";\
	fi;

re: fclean all