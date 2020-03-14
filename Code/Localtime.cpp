#include "Localtime.hpp"
#include <SFML\Window\Keyboard.hpp>

Localtime::Localtime(Timeline* anchor) : anchor(anchor)
{

	time_factor = 1;
	start_time = anchor->getTime();
	pause = false;

}

int Localtime::getTime()
{
	int elapsed = 0;
	
	if (!pause) {
		int now = anchor->getTime();
		int elapsed_time = start_time - now;
		elapsed = elapsed_time * time_factor;
	}

	return elapsed;
}

int Localtime::restart()
{
	int restartTime = getTime();
	start_time = anchor->getTime();
	return restartTime;
}

void Localtime::changeFactor()
{

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
	{
		if (time_factor == 1) {
			time_factor = 2;
		}
		else if (time_factor == 2) {
			time_factor = .5;
		}
		else {
			time_factor = 1;
		}
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::P))
	{
		pause = !pause;
	}
}


