#include "Display.h"
#include <iostream>
using namespace std;

void Display::alimentar() {
	switch (estadoInicial) {
	case 1:
		caca.printHappy();
		estadoInicial = 1;
		break;
	case 2:
		caca.printSad();
		estadoInicial = 1;
		break;
	case 3:
		caca.printAngry();
		estadoInicial = 1;
	case 4:
		caca.printDead();
		estadoInicial = 4;
	}
}

void Display::pegar() {
	switch (estadoInicial) {
	case 1:
		caca.printSad();
		estadoInicial = 2;
		break;
	case 2:
		caca.printAngry();
		estadoInicial = 3;
		break;
	case 3:
		caca.printDead();
		estadoInicial = 4;
	case 4:
		caca.printDead();
		estadoInicial = 4;
	}
}

void Display::bañar() {
	switch (estadoInicial) {
	case 1:
		caca.printHappy();
		estadoInicial = 1;
		break;
	case 2:
		caca.printSad();
		estadoInicial = 2;
		break;
	case 3:
		caca.printSad();
		estadoInicial = 2;
	case 4:
		caca.printDead();
		estadoInicial = 4;
	}
}

void Display::ejercitar() {
	switch (estadoInicial) {
	case 1:
		caca.printHappy();
		estadoInicial = 1;
		break;
	case 2:
		caca.printHappy();
		estadoInicial = 1;
		break;
	case 3:
		caca.printAngry();
		estadoInicial = 3;
	case 4:
		caca.printDead();
		estadoInicial = 4;
	}
}

void Display::imprimirPoop() {
	sf::RenderWindow window(sf::VideoMode(620, 405),
		"Playing Tamagotchi.");

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

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
				cout << "esta presionando d" << endl;
				alimentar();
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
				cout << "esta presionando w" << endl;
				bañar();
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
				cout << "esta presionando s" << endl;
				pegar();
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
				cout << "esta presionando a" << endl;
				ejercitar();
			}
		}
	}
}

