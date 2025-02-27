#include "bomba.h"
//#include <vector>
void bomba::reducirtempo() {
	if (temporizador > 0) temporizador--;
	else activado = false;



}
void bomba::explotar() {
	activado = false;


}

