#pragma once
#include<SFML\Graphics.hpp>
#include"GameObject.h"
#include"Frog.cpp"

class Frog : GameObject
{
private:
	sf::Vector2i Position;
	int lives;

public:
	Frog();

	void Update(double delta);

	void Draw();
};