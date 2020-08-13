#include <iostream>
#include <SFML/Graphics.hpp>
#include "Code/Game/game.hpp"
#include <vector>
#include <filesystem>

#include "Animations/animable.hpp"

int main() {

	Animable::loadAnimations();

	Animable animable;
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
		animable.animate();
		window.draw(animable);
		window.display();
	}
}