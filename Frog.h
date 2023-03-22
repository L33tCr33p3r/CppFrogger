#pragma once

#include<SFML\System.hpp>
#include<SFML\Graphics.hpp>
#include<SFML\Window.hpp>

#include"GameObject2d.h"
#include"Frog.cpp"

class Frog : GameObject2d
{
private:
	sf::Vector2<double> Position;
	int lives;
public:
	Frog();
	void Update(double delta);
	void Draw();
};
