/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvigilan <gvigilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 06:51:39 by gvigilan          #+#    #+#             */
/*   Updated: 2024/02/05 07:01:14 by gvigilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "ft_printf/ft_printf.h"
# include "ft_printf/get_next_line/get_next_line_bonus.h"
# include "./minilibx-linux/mlx.h"
# include <math.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# define PI 3.1415926535

typedef struct	s_vec
{
	float	x;
	float	y;
}				t_vec;

typedef struct s_player
{
	t_vec	pos;
}				t_pc;

typedef struct	s_cub3d
{
	t_pc	pc;
	char	**map;
}				t_cub3d;




#endif
