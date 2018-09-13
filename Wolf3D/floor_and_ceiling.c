#include "includes/wolf.h"

t_env		draw_floor(t_env *ev)
{
	ev->counter = ev->draw_end + 1;
	while (ev->counter < ev->height)
	{
		SDL_SetRenderDrawColor(ev->renderer, 0, 124, 255, 255);
		SDL_RenderDrawPoint(ev->renderer, ev->count_x, ev->counter);
		ev->counter++;
	}
	return (*ev);
}

t_env		draw_ceiling(t_env *ev)
{
	ev->counter = ev->draw_end + 1;
	while (ev->counter < ev->height)
	{
		SDL_SetRenderDrawColor(ev->renderer, 255, 124, 255, 255);
		SDL_RenderDrawPoint(ev->renderer, ev->count_x, ev->height - ev->counter);
		ev->counter++;
	}
	draw_floor(ev);
	return (*ev);
}
