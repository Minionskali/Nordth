#ifndef ENGINE01A_H_INCLUDED
#define ENGINE01A_H_INCLUDED

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

// Zacznijmy od poruszania sie

using namespace sf;
using namespace std;

int x_P = 0;
int y_P = 0;


void ruch();


void ruch()
{
    // Kordy



    //               Ruch

    //lewa
    bool strzalka_L = false;
    //prawa
    bool strzalka_R = false;
    //gora
    bool strzalka_U = false;

    // bool
    if(Keyboard::isKeyPressed(Keyboard::Right))
    {
        strzalka_R = true;
        cout<<"R"<<endl;
    }
    else if(Keyboard::isKeyPressed(Keyboard::Left))
    {
        strzalka_L = true;
        cout<<"L"<<endl;
    }
    else if(Keyboard::isKeyPressed(Keyboard::Up))
    {
        strzalka_U = true;
    }
    if(!Keyboard::isKeyPressed(Keyboard::Right))
    {
        strzalka_R = false;
    }
    else if(!Keyboard::isKeyPressed(Keyboard::Left))
    {
        strzalka_L = false;
    }
    else if(Keyboard::isKeyPressed(Keyboard::Up))
    {
        strzalka_U = false;
    }
    // bool#2
    if(strzalka_R == true)
    {
        x_P+=1;
    }
    else if(strzalka_L == true)
    {
        x_P-=1;
    }
    //Poskoki

}

#endif // ENGINE01A_H_INCLUDED
