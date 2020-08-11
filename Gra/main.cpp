#include <iostream>
#include <SFML/Graphics.hpp>
#include "Code/Game/game.hpp"
#include <array>
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
		window.clear();
		window.display();
	}

	return 0;
}