/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvigilan <gvigilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 07:11:03 by gvigilan          #+#    #+#             */
/*   Updated: 2024/02/05 07:22:43 by gvigilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	new_map(t_cub3d *new, char *path)
{
	char	*line;
	char	*tmp;
	int		fd;

	fd = open(path, O_RDONLY);
	line = get_next_line_bonus(fd);
	tmp = get_next_line_bonus(fd);
	while (ft_strlen(tmp) != 0)
	{
		line = ft_strjoin(line, tmp);
		tmp = get_next_line_bonus(fd);
	}
	close(fd);
	new->map = ft_split(line, '\n');
}

int	check_walls(t_cub3d *new)
{
	int		i;
	int		j;

	i = 0;
	while (new->map[i] != NULL)
	{
		j = 0;
		while (new->map[i][j])
		{
			if (i == 0 || new->map[i + 1] == NULL)
			{
				if (new->map[i][j] != '1')
					return (0);
			}
			else if (j == 0 || j == ((int)ft_strlen(new->map[i]) - 1))
			{
				if (new->map[i][j] != '1')
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
