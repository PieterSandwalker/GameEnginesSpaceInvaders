#include "Gametime.hpp"


Gametime::Gametime(int step_size) : step_size(step_size)
{

	sf::Clock clock;
	start_time = clock.restart();

}

int Gametime::getTime()
{
	
	sf::Time now = clock.getElapsedTime();
	sf::Time elapsed_time = now - start_time;
	int elapsed = elapsed_time.asMicroseconds() / step_size;
	return elapsed;

}
