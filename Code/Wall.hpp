#pragma once
#include "GameObject.hpp"

class Wall :
	public GameObject
{

private:
	Texture texture;

public:
	explicit Wall(Vector2f, Vector2f, string);

};
