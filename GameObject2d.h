#pragma once

#include<SFML/Graphics.hpp>
#include"GameObject.h"

class GameObject2d
{
private:
	sf::Vector2<double> Position;
public:
	virtual void Update(double delta) {};
	virtual void Draw() {};
};
