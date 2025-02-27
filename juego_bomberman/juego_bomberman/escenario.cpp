#include "escenario.h"
#include <iostream>

escenario::escenario(int x, int y) : ancho(x), altura(y){}
	

void escenario::dibujar() {
		std::cout << "dibujando escenario de tamaño " << ancho << "x" << altura << std::endl;
}
