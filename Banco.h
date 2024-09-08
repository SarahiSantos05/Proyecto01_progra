#pragma once
#include <vector>
#include "Prestamo.h"

using namespace std;

class Banco {

private:
	vector<Prestamo*>prestamos;

public:
	Banco();

	~Banco();

	void agregarPrestamo(Prestamo* prestamo);
	void eliminarPrestamo(int indice);
	void mostrarPrestamos() const;
	void calcularInteres() const;
};

