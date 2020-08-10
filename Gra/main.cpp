#include <iostream>
#include <SFML/Graphics.hpp>
#include "Code/Game/game.hpp"
int main() {

	Game game; 

	sf::RenderWindow window(sf::VideoMode(800, 600), "Title");
	
	sf::Event event;

	while (window.isOpen())
	{
		while(window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
	}

	return 0;
}