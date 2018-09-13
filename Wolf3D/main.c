#include "wolf.h"

t_env		do_stuff(t_env *ev)
{
	ray_and_direction(ev);
	side_dist(ev);
	dda_calculate(ev);
	draw_line(ev);
	rendering(ev);
	return (*ev);
}

t_env		ft_init(t_env *ev)
{
	ev->posx = 2; /* X start position*/
	ev->posy = 2; /*Y start position */
	ev->dirx = -1; /*Vector Direction*/
	ev->diry = 0;
	ev->planex = 0; /*2d raycaster camera*/
	ev->planey = 0.66;
	ev->time = 0; /* time for current frame*/
	ev->old_time = 0; /*time for old frame */
	ev->width = 1000;
	ev->height = 600;
	return (*ev);
}

int		ft_sdl_init(t_env *ev)
{
	ev->running = 0;	
	if (SDL_Init( SDL_INIT_EVERYTHING) < 0)
		return (1);
	ev->window = SDL_CreateWindow("Wolf3d", 
			SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED,
	 		1000, 600, 0);
	ev->renderer = SDL_CreateRenderer(ev->window,
			-1, SDL_RENDERER_ACCELERATED);
	SDL_SetRenderDrawColor(ev->renderer, 0, 0, 0, 255);
	SDL_RenderClear(ev->renderer);
	return (0);
}

int		main(int argc, char **argv)
{
	t_env ev;

	ev.count_x = 0;
	if (argc == 2)
	{
		if (open(argv[1], O_RDONLY) == -1)
			ft_putendl("Map Error!");
		else
		{
			get_xy(argv[1], &ev);
			map_alloc(argv[1], &ev);
			ft_sdl_init(&ev);
			ft_init(&ev);
			while (ev.running == 0)
			{
				while (ev.count_x++ < ev.width)
					do_stuff(&ev);
				movements(&ev);
			}
			SDL_DestroyWindow(ev.window);
			SDL_Quit();
		}
	}
	else
		ft_putendl("Error Occured");
	return (0);
}
