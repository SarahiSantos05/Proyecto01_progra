#include "Prestamo.h"
#include <iostream>

using namespace std;

Prestamo::Prestamo(double monto, double tasaInteres, int plazo)
	:monto(monto), tasaInteres(tasaInteres), plazo(plazo) {}
Prestamo::~Prestamo() {}

double Prestamo::getMonto()
{
	return monto;
}

void Prestamo::setMonto(double monto)
{
	this->monto = monto;
}

double Prestamo::getTasaInteres()
{
	return tasaInteres;
}

void Prestamo::setTasaInteres(double tasaInteres)
{
	this->tasaInteres = tasaInteres;
}

int Prestamo::getPlazo()
{
	return plazo;
}

void Prestamo::setPlazo(int plazo)
{
	this->plazo = plazo;
}

void Prestamo::mostrarInformacion()
{
	cout << "Monto: " << monto << endl;
	cout << "Taza de interes: " << tasaInteres << "%" << endl;
	cout << "Plazo: " << plazo << endl;
}