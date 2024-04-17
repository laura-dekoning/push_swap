# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lade-kon <lade-kon@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/04/17 17:52:22 by lade-kon      #+#    #+#                  #
#    Updated: 2024/04/17 19:23:53 by lade-kon      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			:=	push_swap

CC				:=	cc
CFLAGS			:= -Wall -Werror -Wextra -g -fsanitize=address

LIBFT_DIR		:=	lib/libft
LIBFT_A			:=	$(LIBFT_DIR)/libft.a

INCLS_PUSH_SWAP	:=	incl
INCLS_LIBFT		:=	$(LIBFT_DIR)/incl
INCLUDES		:=	-I $(INCLS_PUSH_SWAP) -I $(INCLS_LIBFT)

SRC_DIR			:=	src
SRC_FILES		:= 	push_swap.c \
					input_check.c \
					stack_build.c \
					swap.c \
					push.c \
					rotate.c \
					reverse_rotate.c \
					sorting_utils.c \
					sorting.c \
					big_sort.c \
					small_sort.c \
					error.c
SRC				:=	$(addprefix $(SRC_DIR)/, $(SRC_FILES))

OBJ_DIR			:=	obj
OBJ_FILES		:=	$(SRC_FILES:.c=.o)
OBJ				:=	$(addprefix $(OBJ_DIR)/, $(OBJ_FILES))

.PHONY : all clean fclean re

all: $(NAME) 

$(LIBFT_A):
	@git submodule update --init --recursive --remote
	@make -C $(LIBFT_DIR) > /dev/null

$(NAME) : $(OBJ) $(LIBFT_A)
	@$(MAKE) -C libft
	$(CC) $(CFLAGS) $(OBJ) libft/libft.a -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

norminette:
	@echo "${CYAN}🧐 Checking the Norm...${RESET}"
	@norminette -R CheckForbiddenSourceHeader
	@echo "${GREEN} Norm-i-netting complete. Files are NORM PROOF!${RESET}" 

update:
	@git submodule update --init --recursive --remote

clean:
	@rm -rf $(OBJ)
	@rm -rf obj
	@$(MAKE) clean -C libft

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) fclean -C libft

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