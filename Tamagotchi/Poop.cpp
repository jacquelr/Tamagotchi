#include"Poop.h"
#include<cstdlib>
#include <iostream>

using namespace std;

Poop::Poop() {
   // estado = 1;

    sf::Texture happyTexture;
    happyTexture.loadFromFile("Happy.png");
    sf::Sprite happyPoop(happyTexture);
    happyPoop.setOrigin(313, 201);

    sf::Texture sadTexture;
    sadTexture.loadFromFile("Sad.png");
    sf::Sprite sadPoop(sadTexture);
    sadPoop.setOrigin(313, 201);

    sf::Texture angryTexture;
    angryTexture.loadFromFile("Angry.png");
    sf::Sprite angryPoop(angryTexture);
    angryPoop.setOrigin(313, 201);

    sf::Texture deadTexture;
    deadTexture.loadFromFile("Dead.png");
    sf::Sprite deadPoop(deadTexture);
    deadPoop.setOrigin(313, 201);

    sf::RenderWindow window(sf::VideoMode(620, 405),
        "Playing Tamagotchi.");
}

void Poop::printHappy()
{
    sf::Texture happyTexture;
    happyTexture.loadFromFile("Happy.png");
    sf::Sprite happyPoop(happyTexture);
    happyPoop.setOrigin(313, 201);

    happyPoop.setOrigin(0, 0);
    window.clear(sf::Color(16, 16, 16, 255)); // Dark gray.
    window.draw(happyPoop); // Drawing our sprite.
    window.display();
}

void Poop::printSad()
{
    sf::Texture sadTexture;
    sadTexture.loadFromFile("Sad.png");
    sf::Sprite sadPoop(sadTexture);
    sadPoop.setOrigin(313, 201);

    sadPoop.setOrigin(0, 0);
    window.clear(sf::Color(16, 16, 16, 255)); // Dark gray.
    window.draw(sadPoop); // Drawing our sprite.
    window.display();
}

void Poop::printAngry()
{
    sf::Texture angryTexture;
    angryTexture.loadFromFile("Angry.png");
    sf::Sprite angryPoop(angryTexture);
    angryPoop.setOrigin(313, 201);

    angryPoop.setOrigin(0, 0);
    window.clear(sf::Color(16, 16, 16, 255)); // Dark gray.
    window.draw(angryPoop); // Drawing our sprite.
    window.display();
}

void Poop::printDead()
{
    sf::Texture deadTexture;
    deadTexture.loadFromFile("Dead.png");
    sf::Sprite deadPoop(deadTexture);
    deadPoop.setOrigin(313, 201);

    deadPoop.setOrigin(0, 0);
    window.clear(sf::Color(16, 16, 16, 255)); // Dark gray.
    window.draw(deadPoop); // Drawing our sprite.
    window.display();
}
