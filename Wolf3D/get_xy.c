#include "includes/wolf.h"

void	get_xy(const char *str, t_env *ev)
{
	int		fd;
	int		y_inc;
	int		x_inc;
	char	*line;

	fd = open(str, O_RDONLY);
	x_inc = 0;
	y_inc = 1;
	if (get_next_line(fd, &line) > 0)
		x_inc = ft_count(line, ' ');
	while (get_next_line(fd, &line) > 0)
		y_inc++;
	ev->x = x_inc;
	ev->y = y_inc;
	close(fd);
}
