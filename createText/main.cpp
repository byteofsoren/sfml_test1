#include <iostream>
#include <SFML/Graphics.hpp>

int main(void){
    sf::RenderWindow window(sf::VideoMode(200,200),"SFML works");
    sf::Font font;
    // Lode font from file on the disk.
    if (!font.loadFromFile("/usr/share/fonts/TTF/DejaVuSansCondensed.ttf")) {
        std::cout << "ERROR loading fonts =(" << std::endl;
        _Exit(EXIT_FAILURE);
    }
    
    sf::Text text;
    text.setFont(font);
    text.setString("Hello SFML");
    text.setFillColor(sf::Color(127,127,127));
    text.setCharacterSize(24);

    while (window.isOpen()) {
        sf::Event even;
        while (window.pollEvent(even)) {
            if (even.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear();
        window.draw(text);
        window.display();
    }

    return 0;
}



