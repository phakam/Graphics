#ifndef WOLF_H
# define WOLF_H

# define BUFF_SIZE 32
# define SCREEN_W  640
# define SCREEN_H  480

#include "../libft/libft.h"
#include "stdlib.h"
#include <SDL2/SDL.h>
#include "stdio.h"
#include "unistd.h"
#include <fcntl.h>

typedef	struct	s_info
{
	/* get_x_y */
	int				x;
	int				y;
	int				fd;
	double			**map;
	/* ft_sdl_init */
	int				running;
	SDL_Window		*window;
	SDL_Renderer	*renderer;
	SDL_Event		event;
	/* ft_init */
	double			posx;
	double			posy;
	double			ray_pos_x;
	double			ray_pos_y;
	double			dirx;
	double			diry;
	int				height;
	int				width;
	double			planex;
	double			planey;
	double			time;
	double			old_time;
	double			count_x;
	/* ray_and_direction */
	double			cam_x;
	double			ray_dirx;
	double			ray_diry;
	int				mapx;
	int				mapy;
	double			delta_distx;
	double			delta_disty;
	int				hit;
	/* side_dist */
	int				stepx;
	int				stepy;
	double			side_distx;
	double			side_disty;
	/* dda_Calculate */
	int				side;
	/* draw_line */
	double			perpwalldist;
	int				line_height;
	int				draw_end;
	int				draw_start;
	/* floor */
	int				counter;
	/* rendering */
	int				count_s;
	/* movement */
	double			move_speed;
	double			frame_time;
	double			rot_speed;
	double			old_dirx;
	double			old_planex;
}					t_env;

int		ft_count(const char *str, char c);
void	get_xy(const char *str, t_env *ev);
void	map_cord(char *str, t_env *ev);
void	map_alloc(char *str, t_env *ev);
int		get_next_line(const int fd, char **line);
int		ft_sdl_init(t_env *ev);
t_env	ft_init(t_env *ev);
t_env	ray_and_direction(t_env *ev);
t_env	do_stuff(t_env *ev);
t_env	side_dist(t_env *ev);
t_env	dda_calculate(t_env *ev);
t_env	draw_line(t_env *ev);
t_env	draw_floor(t_env *ev);
t_env	draw_ceiling(t_env *ev);
t_env	rendering(t_env *ev);
void	move_down(t_env *ev);
void	move_left(t_env *ev);
void	move_right(t_env *ev);
void	move_up(t_env *ev);
void	movements(t_env *ev);

# endif
