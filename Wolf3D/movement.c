#include "includes/wolf.h"

void		move_left(t_env *ev)
{
	ev->old_dirx = ev->dirx;
	ev->dirx = ev->dirx * cos(ev->rot_speed) - ev->diry * sin(ev->rot_speed);
	ev->diry = ev->old_dirx * sin(ev->rot_speed) + ev->diry * cos(ev->rot_speed);
	ev->old_planex = ev->planex;
	ev->planex = ev->planex * cos(ev->rot_speed) - ev->planey * sin(ev->rot_speed);
	ev->planey = ev->old_planex * sin(ev->rot_speed) + ev->planey * cos(ev->rot_speed);
}

void		move_right(t_env *ev)
{
	ev->old_dirx = ev->dirx;
	ev->dirx = ev->dirx * cos(-ev->rot_speed) - ev->diry * sin(-ev->rot_speed);
	ev->diry = ev->old_dirx * sin(-ev->rot_speed) + ev->diry * cos(-ev->rot_speed);
	ev->old_planex = ev->planex;
	ev->planex = ev->planex * cos(-ev->rot_speed) - ev->planey * sin(-ev->rot_speed);
	ev->planey = ev->old_planex * sin(-ev->rot_speed) + ev->planey * cos(-ev->rot_speed);
}

void		move_down(t_env *ev)
{
	if (ev->map[(int)(ev->posx - ev->dirx * ev->move_speed)][(int)ev->posy] == 0)
		ev->posx -= ev->dirx * ev->move_speed;
	if (ev->map[(int)ev->posx][(int)(ev->posy - ev->diry * ev->move_speed)] == 0)
		ev->posy -= ev->diry * ev->move_speed;
}

void		move_up(t_env *ev)
{
	if (ev->map[(int)(ev->posx + ev->dirx * ev->move_speed)][(int)ev->posy] 
			== 0)
		ev->posx += ev->dirx * ev->move_speed;
	if (ev->map[(int)ev->posx][(int)(ev->posy + ev->diry * ev->move_speed)] 
			== 0)
		ev->posy += ev->diry * ev->move_speed;
}

void		movements(t_env *ev)
{
	ev->count_x = 0;
	ev->old_time = ev->time;
	ev->time = SDL_GetTicks();
	ev->frame_time = (ev->time - ev->old_time) / 1000.0;
	SDL_RenderPresent(ev->renderer);
	SDL_SetRenderDrawColor(ev->renderer, 0, 0, 255, 255);
	SDL_RenderClear(ev->renderer);
	ev->move_speed = ev->frame_time * 7.0;
	ev->rot_speed = ev->frame_time * 4.0;
	while (SDL_PollEvent(&ev->event))
	{
		if (ev->event.type == SDL_KEYDOWN)
		{
			if (ev->event.key.keysym.sym == SDLK_ESCAPE)
				ev->running = 1;
			if (ev->event.key.keysym.sym == SDLK_UP)
				move_up(ev);
			if (ev->event.key.keysym.sym == SDLK_DOWN)
				move_down(ev);
			if (ev->event.key.keysym.sym == SDLK_RIGHT)
				move_right(ev);
			if (ev->event.key.keysym.sym == SDLK_LEFT)
				move_left(ev);
		}
	}
}
