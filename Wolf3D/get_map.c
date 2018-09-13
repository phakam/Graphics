#include "includes/wolf.h"

void		map_cord(char *str, t_env *ev)
{
	int		x;
	int		y;
	char	*line;
	char	**split;

	y = 0;
	x = 0;
	ev->fd = open(str, O_RDONLY);
	while (get_next_line(ev->fd, &line) > 0 && y < ev->y)
	{
		if (ft_count(line, ' ') >= ev->x)
		{
			split = ft_strsplit(line, ' ');
			x = 0;
			while (x < ev->x)
			{
				ev->map[y][x] = (int)ft_atoi(split[x]);
				x++;
			}
			y++;
			free(line);
		}
		else
			ft_putendl("Map Error!");
	}
	close(ev->fd);
}

void		map_alloc(char *str, t_env *ev)
{
	int		i;

	i = 0;
	ev->map = (double **)malloc(sizeof(double *) * ev->y);
	while (i < ev->y)
	{
		ev->map[i] = (double*)malloc(sizeof(double) * ev->x);
		i++;
	}
	map_cord(str, ev);
}
