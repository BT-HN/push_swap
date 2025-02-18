CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_get_next_line.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_pointerhex.c \
		ft_printf.c \
		ft_putchar.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_puthex.c \
		ft_putnbr.c \
		ft_putnbr_fd.c \
		ft_putstr.c \
		ft_putstr_fd.c \
		ft_reverse.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strlennum.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		get_next_line_utils.c

OBJDIR = obj_libft
OBJ = $(addprefix $(OBJDIR)/, $(SRC:.c=.o))

GREEN	= \033[0;32m
NC		= \033[0m

$(OBJDIR)/%.o : %.c
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJ)
	@ar rcs $@ $^
	@echo "✓ $(GREEN)$(NAME) created.$(NC)"


all: $(NAME)

clean :
	@rm -rf $(OBJDIR)
	@echo "$(GREEN)✓ $(OBJDIR) deleted.$(NC)"

fclean : clean
	@rm -rf $(NAME)
	@echo "$(GREEN)✓ $(NAME) deleted.$(NC)"


re : fclean all

.PHONY: all clean fclean re