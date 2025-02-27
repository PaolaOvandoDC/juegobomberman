#pragma once
class enemigo
{
    public:
        enemigo();  // Constructor
        ~enemigo(); // Destructor

        // Getters
        int getPosicionX() const;
        int getPosicionY() const;
        int getVida() const;

        // Setters
        void setPosicionX(int x);
        void setPosicionY(int y);
        void setVida(int v);

        void mover(int direccion);
        void atacar();
        void defender();
        void recibirdanio(int danio);

    private:
        int posicionX;
        int posicionY;
        int vida;
};

