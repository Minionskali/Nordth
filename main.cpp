#include <iostream>
#include "engine/engine01a.h"
//#include "engine/engine01b.h"

using namespace std;
using namespace sf;


int main()
{

      ruch();
      RenderWindow window(sf::VideoMode(1200, 600), "Game");
      Texture enity01T;
      enity01T.loadFromFile("grafika/enity01.png");
      Sprite enity01;
      enity01.setTexture(enity01T);
      enity01.setPosition(y_P,x_P);
      while (window.isOpen())
        {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        window.clear();
        window.draw(enity01);
        window.display();
        }
}
