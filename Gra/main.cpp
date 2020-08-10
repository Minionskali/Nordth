#include <iostream>
#include <SFML/Graphics.hpp>
int main() {

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