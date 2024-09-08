#include "Banco.h"
#include <iostream>

using namespace std;

Banco::Banco() {}

Banco::~Banco() {
	for (Prestamo* prestamo : prestamos) {
		delete prestamo;
	}
}
void Banco::agregarPrestamo(Prestamo* prestamo) {
	prestamos.push_back(prestamo);
}

void Banco::eliminarPrestamo(int indice) {
	if (indice >= 0 && indice < prestamos.size()) {
		delete prestamos[indice];
		prestamos.erase(prestamos.begin() + indice);
	}
	else {
		cerr << "Indice no valido" << endl;
	}
}

void Banco::mostrarPrestamos() const {
	for (Prestamo* prestamo : prestamos) {
		prestamo->mostrarInformacion();
	}
}

void Banco::calcularInteres() const {
	for (Prestamo* prestamo : prestamos) {
		cout << "Interes del prestamos: " << prestamo->calcularInteres() << endl;
	}
}
