#pragma once
#include "Timeline.hpp"
#include <SFML\System\Time.hpp>
#include <SFML\System\Clock.hpp>

class Gametime :
	public Timeline
{

	private:
		sf::Time start_time;
		int step_size;
		sf::Clock clock;
	
	public:
		explicit Gametime(int step_size);
		int getTime();

};

