#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
//          TYLKO ŻE SAMI MUSICIE SE WGRAĆ SFML DO PROJEKTU 
//          I JEST ZROBIONY ON W CODE BLOK



using namespace std;
using namespace sf;


int main()
{
();
      RenderWindow window(sf::VideoMode(1200, 600), "Nordth");
      while (window.isOpen())
        {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        window.clear();
        window.display();
        }
}
