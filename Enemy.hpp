#pragma once
#include "GameObject.hpp"

class Enemy :
	public GameObject
{

private:
	Texture texture;

public:
	explicit Enemy(Vector2f, Vector2f, Vector2f, string);

};
