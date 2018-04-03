#ifndef PKMN_WINDOW_H
#define PKMN_WINDOW_H 1

#include <stdlib.h>
#include <stdio.h>

#include "pkmn-event.h"

typedef struct 
{
	unsigned int window_id;
}PkmnWindowId;

typedef struct PkmnWindowHandleData PkmnWindowHandleData;

typedef struct 
{
	char title[30];
	int x,y;
	unsigned int w,h;
	float opacity;
  int fullscreen;
  unsigned int wflags;
}PkmnWindowCreationData;

extern PkmnWindowId PKMN_API pkmn_window_create(PkmnWindowCreationData* data);

extern void PKMN_API pkmn_window_destroy(PkmnWindowId id);

typedef struct 
{
	unsigned int* w, * h;
}PkmnWindowDimensionData;

extern void PKMN_API pkmn_window_get_width(unsigned int* w, PkmnWindowId id);

extern void PKMN_API pkmn_window_set_width(unsigned int w, PkmnWindowId id);

extern void PKMN_API pkmn_window_set_height(unsigned int h, PkmnWindowId id);

extern void PKMN_API pkmn_window_get_height(unsigned int* h, PkmnWindowId id);

extern void PKMN_API pkmn_window_set_dimemsions(unsigned int w, unsigned int h, PkmnWindowId id);

extern void PKMN_API
pkmn_window_get_dimensions(unsigned int*w, unsigned int* h, PkmnWindowId id);

typedef struct
{
	unsigned int* x, * y;
}PkmnWindowPositionData;

extern void PKMN_API pkmn_window_set_position(unsigned int x, unsigned int y, PkmnWindowId id);

extern void PKMN_API pkmn_window_get_position(unsigned int* x, unsigned int* y, PkmnWindowId);

typedef struct
{
	char* title[30];
}PkmnWindowTextData;

extern void PKMN_API pkmn_window_set_title(char* title, PkmnWindowId id);

extern const char* PKMN_API pkmn_window_get_title(PkmnWindowId id);

typedef struct 
{
	PkmnWindowId* w_ids;
	PkmnWindowHandleData* whandles;
	PkmnWindowDimensionData wddata;
	PkmnWindowTextData wtdata;
	PkmnWindowPositionData wpdata;
	int count;
	int size;
}PkmnWindowData;

extern void PKMN_API pkmn_window_system_init_ex(unsigned int win_count);

extern void PKMN_API pkmn_window_system_init();

extern void PKMN_API pkmn_window_system_update();

extern void PKMN_API pkmn_window_system_resize_storage(unsigned int size);



#endif 