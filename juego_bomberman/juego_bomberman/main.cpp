#include <iostream>
#include "bomberman.h"
#include "enemigo.h"
#include "bomba.h"
#include "escenario.h"

int main() {
    bomberman jugador(3,3);
    enemigo enemigo1;
    bomba bomb(5, 5);
    std::cout << "bomba activada(" << bomb.x << "," << bomb.y << ")\n";
    /**//*/*//*while (bomb.activado) {
        bomb.temporizador();
    }
    std::cout << "bomba explotando\n";
    bomb.explotar(enemigo1, jugador);/**/
    escenario mapa(10, 10);

    //bomberman* jugador_ptr = new bomberman(3,3);
    //mba* bomb_ptr = new bomba(5,5);

    mapa.dibujar();
 

    jugador.mover('d');          // Mover al jugador
    jugador.colocarBomba();    // El jugador coloca una bomba
    jugador.recibirdanio();

    enemigo1.mover(2);
    enemigo1.atacar();
    enemigo1.defender();
    enemigo1.recibirdanio(30);
    bomb.reducirtempo();
    bomb.explotar();
    

    return 0;
}