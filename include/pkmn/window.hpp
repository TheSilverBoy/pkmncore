#ifndef PKMN_WINDOW_H
#define PKMN_WINDOW_H

#include <cstdio>
#include <cstdlib>

#include <vector>
#include <array>

namespace pkmn
{
	 struct window_id
	 {
	 	  unsigned int id;
	 };
	 
	 struct window_title_data
	 {
	 	 char title[30];
	 };
	 
	 struct window_dimension_data
	 {
	 	  unsigned int w,h;
	 };
	 
	 struct window_position_data
	 {
	 	 int x,y;
	 }
	 
	  struct window_creation_data
	  {
	 	  char title[20];
	 	  int x,y;
	 	  unsigned int w,h;
	 	  int fullscreen;
	 	  unsigned int wflags;
	  };
	 
	 class window_storage
	 {
	 	    std::vector<window_position_data>  m_wpdata;
	 	   std::vector<float>
	 	    m_wodata; 
	 	    std::vector<window_title_data>
	 	    m_wtdata;
	 	     std::vector<window_dimension_data> m_wddata;
	 	 
	 	    std::vector<bool> m_wtrackers;
	 	    
	 	    int count;
	 	    int size;
	 	    
	 	  private:
	 	    static window_storage* ws_instance;
	 	  private:
	 	    window_storage();
	 	    ~window_storage();
	 	    
	 	    void update();
	 	  public:
	 	    static window_storage& get_instance();
	 	  
	 	    window_id* create_windows(window_creation_data* wcdata, unsigned int count);
	 	 
	 	    void destroy_windows(window_id* id, unsigned int count);
	 	    
	 	    void set_title(const window_id* wids, window_title_data* wtdata, unsigned int count);
	 	    
	 	    void set_opacity(const window_id* wids, window_opacity_data* opacities, unsigned int count);
	 	    
	 	    void set_position(const window_id* wids, window_position_data* positions, unsigned int count);
	 	    
	 	    void set_dimensions(const window_id* wids, window_position_data* wpdata, unsigned int count);
	 	    
	 	    const char* get_title(const window_id& id);
	 	    
	 	    float get_opacity(const window_id& id);
	 	    
	 	    window_position_data get_position(const window_id& id);
	 	    
	 	    window_dimension_data get_dimensions(const window_id& id);
	 };
}

#endif // PKMN_WINDOW_H