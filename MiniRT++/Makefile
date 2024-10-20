NAME = MiniRT

include config/srcs.mk

DIR_BUILD = .build/
OBJS = $(patsubst %.cpp, $(DIR_BUILD)%.o, $(SRCS))
DEPS = $(patsubst %.cpp, $(DIR_BUILD)%.d, $(SRCS))
DEPS_FLAGS = -MMD -MP
BASE_CFLAGS = -Wall -Werror -Wextra -std=c++98 -O2 -pipe
LDFLAGS = -ldl -lglfw -lm -lpthread -L ./MLX42/build/ -lmlx42
BASE_DEBUG_CFLAGS = -g3 -DDEBUG=1
DEBUG_CFLAGS = $(BASE_DEBUG_CFLAGS)
FLAGS = $(BASE_CFLAGS)
RM = rm -rf
AR = ar rcs
CC = c++

GREEN = \033[32m
BLUE = \033[34m
RESET = \033[0m
RED = \033[31m

MINILIBX_PATH = ./MLX42/build/
MINILIBX_INCLUDES = ./MLX42/include/MLX42/
MINILIBX_A = $(MINILIBX_PATH)libmlx42.a
MINILIBX_L = -L $(MINILIBX_PATH) -lmlx42
MAKE_MINILIBX = $(MAKE) -C ./MLX42

INCLUDES += -I$(MINILIBX_INCLUDES) -I./includes/
LIBS = $(LDFLAGS)

.PHONY: all
all: $(NAME)

# Build the MiniRT executable
$(NAME): $(OBJS)
	$(MAKE_MINILIBX)
	@$(CC) $(FLAGS) $(INCLUDES) $(OBJS) $(LDFLAGS) -o $(NAME)
	@printf "$(GREEN)$(NAME) has been created$(RESET)\n"

# Rule for object file compilation
$(DIR_BUILD)%.o: %.cpp
	@mkdir -p $(@D)
	@$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@
	@printf "$(BLUE)Compiling $<$(RESET)\n"

.PHONY: clean
clean:
	$(MAKE_MINILIBX) clean
	$(RM) $(DIR_BUILD)

.PHONY: fclean
fclean: clean
	$(RM) $(NAME)

.PHONY: re
re: fclean all

# Include dependency files
-include $(DEPS)
