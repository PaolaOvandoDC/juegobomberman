#pragma once
class bomba
{
public:
	int x, y;
	bool activado;
	int temporizador;

public:

	bomba(int bx, int by) {
		x = bx;
		y = by;
		activado = true;
		temporizador = 3;
	}

	void reducirtempo();
	void explotar();

};

