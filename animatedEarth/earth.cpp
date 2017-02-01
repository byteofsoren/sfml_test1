#include "earth.hpp"
#include <iostream>
#include <vector>


Earth::Earth(){
    Earth::dx = 0;      // veft coner strait down.
    Earth::dy = -1;
    Earth::circle.setRadius(100);
    Earth::circle.setFillColor(sf::Color(sf::Color::White));
    Earth::circle.setPosition(100,100);
    // Load a texture on sircle
    if (!texture.loadFromFile("earth.png")) {
        std::cout << "ERROR cant load texture from file" << std::endl;
        _Exit(EXIT_FAILURE);
    }
    circle.setTexture(&texture);
}
Earth::~Earth(){}

void Earth::update()
{
    // Math goes in heare:
    sf::Vector2<float> pos = Earth::circle.getPosition();
    pos.x++;
    pos.y++;
    Earth::circle.setPosition(pos.x, pos.y);
    
    
}

void Earth::render(sf::RenderWindow *win)
{
    win->draw(Earth::circle);
}
