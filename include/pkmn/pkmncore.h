#include <stdlib.h>
#include <stdio.h>

#include "vector.h"

typedef void(*InitFunc)();
typedef void(*DrawFunc)();
typedef void(*AudioFunc)();
typedef void(*InputFunc)();
typedef void(*CleanupFunc)();

typedef struct
{
	InitFunc init_func;
	DrawFunc draw_func;
	AudioFunc audio_func;
	InputFunc input_func;
	CleanupFunc cleanup_func;
}PkmncCallbacksFunc;

typedef struct PkmncApplication PkmncApplication;

extern PkmncApplication pkmnc_application_create(const char* title, int w, int h, PkmncCallbacksFunc* callback_functions);




