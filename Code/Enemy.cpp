#include "Enemy.hpp"
#include "Path.hpp"
#include <iostream>

Enemy::Enemy(Vector2f size, Vector2f position, Vector2f destination, string texturePath) : GameObject(NULL, true, true, "Enemy") {

	Shape* shape = new RectangleShape(size);
	shape->setPosition(position);
	setShape(shape);

	if (!texture.loadFromFile(texturePath))
	{
		std::cout << "Texture not found\n";
		shape->setFillColor(sf::Color(100, 200, 200));  //To be replaced by texture
	}
	else {
		shape->setTexture(&texture);
	}
	
	Path* path = new Path(shape, position, destination, 1.f);

	components.push_back(path);

}
