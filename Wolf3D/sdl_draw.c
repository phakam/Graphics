#include "includes/wolf.h"

t_env		rendering(t_env *ev)
{
	draw_ceiling(ev);
	ev->count_s = ev->draw_start;
	if (ev->side == 0)
		SDL_SetRenderDrawColor(ev->renderer, 0, 0, 255, 255);
	if (ev->side != 0)
		SDL_SetRenderDrawColor(ev->renderer, 255, 0, 0, 255);
	if (ev->side == 0 && ev->ray_dirx < 0)
		SDL_SetRenderDrawColor(ev->renderer, 0, 255, 0, 255);
	if (ev->side == 1 && ev->ray_diry < 0)
		SDL_SetRenderDrawColor(ev->renderer, 255, 255, 255, 255);
	while (ev->count_s < ev->draw_end)
	{
		SDL_RenderDrawPoint(ev->renderer, ev->count_x, ev->count_s);
		ev->count_s++;
	}
	return (*ev);
}
