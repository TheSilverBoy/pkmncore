#include "game.hpp"

namespace pkmn
{
	sf::RenderWindow game::window;
	
	game() = default;
	~game() = default;
	
	void game::runloop()
	{
		init();
		while(window.isOpen())
		{
			process_input();
			play_audio();
			render();
			update();
		}
		clean();
	}
	
	void game::init()
	{
		window.create(sf::Video)
	}
	void game::process_input()
	{
		sf::Event event;
		while(window.pollEvents
		    (event))
		{
			if(event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
	}
	void game::play_audio()
	{
		
	}
	void game::render()
	{
		
	}
	void game::update()
	{
		
	}
	void game::clean()
	{
		
	}
}

