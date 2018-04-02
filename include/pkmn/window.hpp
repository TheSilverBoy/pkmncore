#ifndef PKMN_WINDOW_H
#define PKMN_WINDOW_H

#include <cstdio>
#include <cstdlib>

#include <vector>

namespace pkmn
{
	 struct window_id
	 {
	 	  unsigned int id;
	 };
	
	 struct window_data
	 {
	 	  const char title[20];
	 	  int x,y;
	 	  unsigned int w,h;
	 	  float opacity;
	 };
	 
	 struct window_creation_data
	 {
	 	  window_data wdata;
	 	  int fullscreen;
	 	  unsigned int wflags;
	 };
	 
	 struct window_opacity_data
	 {
	 	  float opacity;
	 };
	 
	 struct window_dimension_data
	 {
	 	  unsigned int w,h;
	 }
	 
	 class window_manager 
	 {
	 	    std::vector<window_data>  m_wdata;
	 	        std::vector<window_opacity_data>
	 	    m_wodata;
	 	  
	 	    std::vector<window_id> m_wids;
	 	    
	 	    int count;
	 	    int size;
	 	  public:
	 	    window_id* create_windows(window_creation_data* wcdata, unsigned int count);
	 	 
	 	    void destroy_windows(window_id* id, unsigned int count);
	 	    
	 	    void set_opacity(window_id* wids, window_opacity_data* opacities, unsigned int count);
	 	    
	 	    void set_dimensions()
	 };
	 
	 
}

#endif // PKMN_WINDOW_H
