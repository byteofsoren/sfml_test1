#include <iostream>
#include <SFML/Graphics.hpp>
#include <iostream>

int main(void){
    sf::RenderWindow window(sf::VideoMode(200,200),"SFML works");
    sf::CircleShape shape(100.f);
    shape.setPosition(10,150);
    shape.setFillColor(sf::Color(130,40,255));

    sf::Texture texture;
    if (!texture.loadFromFile("earth.png")) {
        std::cout << "ERROR failed to load from file" << std::endl;
       _Exit(EXIT_FAILURE); 
    }
    texture.setSmooth(1);
    shape.setTexture(&texture,1);


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



