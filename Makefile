# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lade-kon <lade-kon@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/04/17 17:52:22 by lade-kon      #+#    #+#                  #
#    Updated: 2024/05/08 20:46:56 by lade-kon      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			:=	push_swap
NAME_BONUS		:=	checker

CC				:=	cc
CFLAGS			:= -Wall -Werror -Wextra #-g -fsanitize=address

LIBFT_DIR		:=	lib/libft
LIBFT_A			:=	$(LIBFT_DIR)/libft.a

INCLS_PUSH_SWAP	:=	incl
INCLS_LIBFT		:=	$(LIBFT_DIR)/incl
INCLUDES		:=	-I $(INCLS_PUSH_SWAP) -I $(INCLS_LIBFT)

SRC_DIR			:=	src
SRC_OPERATIONS	:=	operations
SRC_SORTING		:=	sorting
SRC_BONUS		:=	bonus

SRC_DIRS		:= $(SRC_DIR) $(SRC_OPERATIONS) $(SRC_SORTING) $(SRC_BONUS)

SRC_FILES		:= 	push_swap.c \
					stack_build.c \
					sorting_utils.c \
					check_input.c \
					free_all.c \
					error.c \
					list_tests.c \
					node_tests.c \
					$(addprefix $(SRC_OPERATIONS)/, \
					swap.c \
					push.c \
					rotate.c \
					reverse_rotate.c ) \
					$(addprefix $(SRC_SORTING)/, \
					pre_sort.c \
					select_sort.c \
					two_sort.c \
					three_sort.c \
					four_sort.c \
					five_sort.c \
					radix_sort.c )
SRC_FILES_BONUS	:=	$(addprefix $(SRC_BONUS)/, \
					operations.c \
					push_swap_bonus.c ) \
					stack_build.c \
					check_input.c \
					sorting_utils.c \
					free_all.c \
					error.c \
					list_tests.c \

SRC				:=	$(addprefix $(SRC_DIR)/, $(SRC_FILES))

OBJ_DIR			:=	obj
OBJ_DIR_BONUS	:=	bonus
OBJ_FILES		:=	$(SRC_FILES:.c=.o)
OBJ_FILES_BONUS	:=	$(SRC_FILES_BONUS:.c=.o)
OBJ				:=	$(addprefix $(OBJ_DIR)/, $(OBJ_FILES))
OBJ_BONUS		:=	$(addprefix $(OBJ_DIR)/, $(OBJ_FILES_BONUS))

.PHONY : all clean fclean re

all: $(NAME) 

$(LIBFT_A):
	@git submodule update --init --recursive --remote
	@make -C $(LIBFT_DIR) > /dev/null

$(NAME): $(OBJ) $(LIBFT_A)
	$(CC) $(CFLAGS) $(OBJ) $(INCLUDES) $(LIBFT_A) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(addprefix $(OBJ_DIR)/, $(SRC_DIRS))
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

bonus: $(NAME) $(NAME_BONUS)

$(NAME_BONUS): $(OBJ_BONUS) $(LIBFT_A)
	$(CC) $(CFLAGS) $(OBJ_BONUS) $(INCLUDES) $(LIBFT_A) -o $(NAME_BONUS)

norminette:
	@echo "${CYAN}🧐 Checking the Norm...${RESET}"
	@norminette -R CheckForbiddenSourceHeader
	@echo "${GREEN} Norm-i-netting complete. Files are NORM PROOF!${RESET}" 

update:
	@git submodule update --init --recursive --remote

clean:
	@rm -rf $(OBJ_DIR)
	@make -C $(LIBFT_DIR) clean > /dev/null

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean > /dev/null

re: fclean all

## Colours ##
RESET	:= \033[0m
RED		:= \033[1;91m
GREEN	:= \033[1;92m
YELLOW	:= \033[1;93m
BLUE	:= \033[1;94m
PURPLE	:= \033[1;95m
CYAN	:= \033[1;96m
WHITE	:= \033[1;97m
BLACK	:= \033[1;90m