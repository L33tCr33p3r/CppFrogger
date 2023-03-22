#pragma once

#include<vector>
#include<SFML/Graphics.hpp>
#include"GameObject.h"

class Game
{
private:
	// ????
public:
	static std::vector<GameObject> gameObjects;
	static sf::Window renderWindow;

	Game();

	void Run();
};
