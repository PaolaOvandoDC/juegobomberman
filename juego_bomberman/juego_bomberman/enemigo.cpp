#include "enemigo.h"
#include <iostream>
enemigo::enemigo() : posicionX(0), posicionY(0), vida(100) {
    // Inicializaci�n del enemigo
}

enemigo::~enemigo() {
    // Limpieza si es necesario
}
// Getters
int enemigo::getPosicionX() const { return posicionX; }
int enemigo::getPosicionY() const { return posicionY; }
int enemigo::getVida() const { return vida; }

// Setters
void enemigo::setPosicionX(int x) { posicionX = x; }
void enemigo::setPosicionY(int y) { posicionY = y; }
void enemigo::setVida(int v) {
    if (v >= 0)
        vida = v;
}

void enemigo::mover(int direccion) {
    // L�gica para mover al enemigo seg�n la direcci�n
    switch (direccion) {
    case 0: posicionY--; break; // Arriba
    case 1: posicionX++; break; // Derecha
    case 2: posicionY++; break; // Abajo
    case 3: posicionX--; break; // Izquierda
    default: std::cout << "Direcci�n inv�lida" << std::endl;
    }
}

void enemigo::atacar() {
    // L�gica para que el enemigo ataque
    std::cout << "�El enemigo ataca!" << std::endl;
}
void enemigo::defender() {
    // L�gica para que el enemigo se defienda
    std::cout << "�El enemigo se defiende!" << std::endl;
}

void enemigo::recibirdanio(int danio) {
    setVida(getVida() - danio); // Usamos el setter para modificar la vida
    if (getVida() <= 0) {
        std::cout << "�El enemigo ha sido derrotado!" << std::endl;
    }
    else {
        std::cout << "El enemigo tiene " << getVida() << " puntos de vida restantes." << std::endl;
    }
}
