#pragma once
#include "Poop.h"
#include <SFML/Graphics.hpp>

class Display{
public:
	Poop caca;
	int estadoInicial = 1;
	int estadoFinal;
	void alimentar();
	void pegar();
	void ba�ar();
	void ejercitar();
	void imprimirPoop();
};