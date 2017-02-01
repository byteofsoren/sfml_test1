#include <iostream>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "earth.hpp"

int main(void){
    sf::RenderWindow window(sf::VideoMode(200,200),"SFML works");

    Earth *earth = new Earth;


    while (window.isOpen()) {
        sf::Event even;
        while (window.pollEvent(even)) {
            if (even.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear();
        earth->update();
        earth->render(&window);
        window.display();
    }

    return 0;
}



