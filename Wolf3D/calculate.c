#include "includes/wolf.h"

t_env		draw_line(t_env *ev)
{
	if (ev->side == 0)
		ev->perpwalldist = (ev->mapx - ev->posx + 
				(1 - ev->stepx) / 2) / ev->ray_dirx;
	else
		ev->perpwalldist = (ev->mapy - ev->posy + 
				(1 - ev->stepy) / 2) / ev->ray_diry;
	ev->line_height = (int)((int)ev->height / ev->perpwalldist);
	ev->draw_start = -ev->line_height + ev->height / 2;
	if (ev->draw_start < 0)
		ev->draw_start = 0;
	ev->draw_end = ev->line_height + ev->height / 2;
	if (ev->draw_end >= ev->height)
		ev->draw_end = ev->height - 1;
	return (*ev);
}

t_env		dda_calculate(t_env *ev)
{
	while (ev->hit == 0)
	{
		if (ev->side_distx < ev->side_disty)
		{
			ev->side_distx += ev->delta_distx;
			ev->mapx += ev->stepx;
			ev->side = 0;
		}
		else
		{
			ev->side_disty += ev->delta_disty;
			ev->mapy += ev->stepy;
			ev->side = 1;
		}
		if (ev->map[ev->mapx][ev->mapy] > 0)
			ev->hit = 1;
	}
	return (*ev);
}

t_env		side_dist(t_env *ev)
{
	if (ev->ray_dirx < 0)
	{
		ev->stepx = -1;
		ev->side_distx = (ev->ray_pos_x - ev->mapx) * ev->delta_distx;
	}
	else
	{
		ev->stepx = 1;
		ev->side_distx = (ev->mapx + 1.0 - ev->ray_pos_x) * ev->delta_distx;
	}
	if (ev->ray_diry < 0)
	{
		ev->stepy = -1;
		ev->side_disty = (ev->ray_pos_y - ev->mapy) * ev->delta_disty;
	}
	else
	{
		ev->stepy = 1;
		ev->side_disty = (ev->mapy + 1.0 - ev->ray_pos_y) * ev->delta_disty;
	}
	return (*ev);
}

t_env		ray_and_direction(t_env *ev)
{
	ev->cam_x = 2 * ev->count_x / (double)ev->width - 1;
	ev->ray_pos_x = ev->posx;
	ev->ray_pos_y = ev->posy;
	ev->ray_dirx = ev->dirx + ev->planex * ev->cam_x;
	ev->ray_diry = ev->diry + ev->planey * ev->cam_x;
	ev->mapx = (int)ev->posx; /* box of map you are in*/
	ev->mapy = (int)ev->posy; /* box of map you are in*/
	ev->delta_distx = sqrt(1 + (ev->ray_diry * ev->ray_diry) / 
			(ev->ray_dirx * ev->ray_dirx));
	ev->delta_disty = sqrt(1 + (ev->ray_dirx * ev->ray_dirx) / 
			(ev->ray_diry * ev->ray_diry));
	ev->hit = 0;
	return (*ev);
}
