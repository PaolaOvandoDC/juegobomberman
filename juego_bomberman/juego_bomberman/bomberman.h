#pragma once
class bomberman
{
private:
    int posicionX;
    int posicionY;
    int vidas;
    int cantidadBombas;

public:

    /**/////bomberman();  // Constructor
    //~bomberman(); // Destructor
    bomberman(int X, int Y) : posicionX(X), posicionY(Y), vidas(3), cantidadBombas(1){}
    void mover(char direccion);
    void colocarBomba();
    void recibirdanio();


};

