#include "bomberman.h"
#include <iostream>
//bomberman::bomberman() : posicionX(0), posicionY(0), cantidadBombas(1) {
    // Inicializaci�n del jugador
//}

//bomberman::~bomberman() {
    // Limpieza si es necesario
//}

void bomberman::mover(char direccion) {
    switch (direccion) {
    case 'a': posicionY--; break; //arriba
    case 'b': posicionY++; break; //abajo
    case 'i': posicionX--; break; //isquierda
    case 'd': posicionX++; break; //derecha
    }
    std::cout << "bomberman se movio a (" << posicionX << ";" << posicionY << ")\n";
    // L�gica para mover al jugador seg�n la direcci�n
}

void bomberman::colocarBomba() {
    //if (cantidadBombas > 0) {
        // L�gica para colocar una bomba
        //cantidadBombas--;
    //}
    //else {
        //std::cout << "No tienes bombas disponibles." << std::endl;
    //}
    std::cout << "bomba colocada en (" << posicionX << "," << posicionY << ")\n";
}
void bomberman::recibirdanio() {
    if (vidas > 0) vidas--;
    std::cout << "bomberman recibio da�o, vidas restantes :" << vidas << ")\n";
}