# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dias <dias@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/15 12:00:00 by dias              #+#    #+#              #
#    Updated: 2025/03/15 12:00:00 by dias             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories
PRINTF_DIR = ft_printf
MLX_DIR = minilibx-linux

# Libraries
PRINTF = $(PRINTF_DIR)/libftprintf.a
MLX = $(MLX_DIR)/libmlx.a
LIBS = $(PRINTF) $(MLX) -lXext -lX11 -lm

# Source files
SRCS = ft_clean_images.c \
       ft_close_game.c \
       ft_close_game_success.c \
       ft_close_window.c \
       ft_count_collectibles.c \
       ft_count_dots.c \
       ft_fill_grid.c \
       ft_find_player_position.c \
       ft_free_grid.c \
       ft_handle_keypress.c \
       ft_init_game.c \
       ft_init_grid.c \
       ft_init_map.c \
       ft_init_mlx.c \
       ft_init_player.c \
       ft_is_valid_arguments.c \
       ft_is_valid_borders.c \
       ft_is_valid_characters.c \
       ft_is_valid_path.c \
       ft_is_valid_path_to_exit.c \
       ft_is_valid_quantity.c \
       ft_is_valid_shape.c \
       ft_linelen.c \
       ft_load_images.c \
       ft_move_player.c \
       ft_print_grid_debug.c \
       ft_put_image.c \
       ft_render_map.c \
       ft_strcmp.c \
       get_next_line.c \
       get_next_line_utils.c \
       so_long.c \
       wow.c

# Object files
OBJS = $(SRCS:.c=.o)

# Targets
all: $(NAME)

# Main compilation
$(NAME): $(OBJS) $(PRINTF) $(MLX)
	$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)

# Pattern rule for object files
%.o: %.c
	$(CC) $(CFLAGS) -I$(PRINTF_DIR) -I$(MLX_DIR) -c $< -o $@

# Printf library
$(PRINTF):
	make -C $(PRINTF_DIR)

# MLX library
$(MLX):
	make -C $(MLX_DIR)

clean:
	rm -f $(OBJS)
	make -C $(PRINTF_DIR) clean
	make -C $(MLX_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
