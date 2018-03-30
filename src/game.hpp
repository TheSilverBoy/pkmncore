#include <iostream>

#include <SFML/Graphices.hpp>

namespace pkmn
{
	 class game
	 {
	 	 public:
	 	 static sf:RenderWindow window;
	 	 
	 	 private:
	 	   void init();
	 	   void process_input();
	 	   void play_audio();
	 	   void render();
	 	   void update();
	 	   void clean();
	 	  public:
	 	   game();
	 	   ~game();
	 	   
	 	   void runloop();
	 }
}
