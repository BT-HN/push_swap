CC = cc
INCLUDES = include/
CFLAGS = -I$(INCLUDES) -Wall -Wextra -Werror -g
NAME = push_swap
SRC = ft_new_stack.c ft_new_stack_utils.c main.c ft_atol.c check_free.c 

OBJDIR = obj_push_swap
OBJ = $(addprefix $(OBJDIR)/, $(SRC:.c=.o))

GREEN	= \033[0;32m
NC		= \033[0m

$(OBJDIR)/%.o : %.c
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -o $@ -c $<
	@echo "$(GREEN)✓ $< compiled.$(NC)"

$(NAME) : $(OBJ)
	@make all --no-print-directory -C libft
	@$(CC) -o $@ $^ -Llibft -lft
	@echo "✓ $(GREEN)$(NAME) created.$(NC)"


all: $(NAME)

clean :
	@rm -rf $(OBJDIR)
	@make clean --no-print-directory -C libft
	@echo "$(GREEN)✓ $(OBJDIR) deleted.$(NC)"

fclean : clean
	@rm -rf $(NAME)
	@echo "$(GREEN)✓ $(NAME) deleted.$(NC)"


re : fclean all

.PHONY: all clean fclean re