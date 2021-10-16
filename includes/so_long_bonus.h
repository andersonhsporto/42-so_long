/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:19:25 by anhigo-s          #+#    #+#             */
/*   Updated: 2021/10/15 21:35:26 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include "so_utils_bonus.h"

# include "mlx.h"

# include "../libft/libft.h"
#include "../gnl/get_next_line_bonus.h"

# include <fcntl.h>//open, O_RDONLY
# include <unistd.h>//read, close
# include <stdlib.h>//malloc
# include <stdio.h>//printf


void	init_images(t_game	*game);


void	map_maker(t_game	*game);
void	init_map(t_game *game, char *path);

int		key_check(int keycode, t_game *parameter);
t_img	new_sprite(void *mlx, char *path);

void	move_right(t_game *parameter);
void	move_left(t_game *parameter);
void	move_up(t_game *parameter);
void	move_down(t_game *parameter);

int		check_wall(t_game *parameter);
void	destroy_image(t_game *game);

void	init_map(t_game *game, char *path);

int		len_map(char **map, t_game *game);

void	player_init(t_game	*game);

void	update_map(t_game *game);
int		check_arg(const char *argv);

void	print_moves(t_game *game);

t_counter	map_check_two(char *string_map, t_game *game);

void	endgame(char *message, t_game *game, int i);



void	free_map(t_game	*game);


//window.c
void	init_so_long(t_game *game);
int		red_cross(t_game *game);


#endif