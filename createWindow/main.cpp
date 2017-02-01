#include <iostream>
#include <SFML/Graphics.hpp>

int main(void){
    sf::RenderWindow window(sf::VideoMode(200,200),"SFML works");
    sf::CircleShape shape(100.f);
    shape.setPosition(10,150);
    shape.setFillColor(sf::Color(130,40,255));

    while (window.isOpen()) {
        sf::Event even;
        while (window.pollEvent(even)) {
            if (even.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}



