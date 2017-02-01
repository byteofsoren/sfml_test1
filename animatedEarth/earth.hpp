#ifndef EARTH_H
#define EARTH_H
#include <SFML/Graphics.hpp>

class Earth
{
    sf::Time Elapsed;
    sf::CircleShape circle;
    sf::Texture texture;
    float dx, dy;

public:
    Earth();
    virtual ~Earth();
    void update();
    void render(sf::RenderWindow *win);

};

#endif /* EARTH_H */
