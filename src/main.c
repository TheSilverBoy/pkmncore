#include <stdio.h>
#include <stdlib.h>

#include <SDL2/SDL.h>

#define APPLICATION_WIDTH 800
#define APPLICATION_HEIGHT 600

void init();
void input_process();
void audio_play();
void clean_up();
void draw();

SDL_Window* window;
SDL_Event event;

int main(int argc, char **argv)
{
	 SDL_Init(SDL_INIT_EVERYTHING);
	 
	 window = SDL_CreateWindow("Pokemon", SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,APPLICATION_WIDTH, APPLICATION_HEIGHT,SDL_WINDOW_SHOWN );
	 
	 init();
	 
	 int done = 0;
	
	 while(!done)
	 {
	 	  input_process();
	 	  audio_play();
	 	  draw();
	 }
	 
	 clean_up();
	
	 SDL_DestroyWindow(window);
	 SDL_Quit();
	 
	 return 0;
}

void init()
{
	
}

void input_process()
{
	
}

void audio_play()
{
	
}

void draw()
{
	
}

void clean_up()
{
	
}


