#include "Personal.h"
#include <string>
#include <iostream>
using namespace std;

Personal::Personal(double monto, double tasaInteres, int plazo) :Prestamo(monto, tasaInteres, plazo) {}
Personal::~Personal() {}

double Personal::calcularInteres()
{
    return (getMonto() * getTasaInteres() * getPlazo()) / 360;
}

void Personal::mostrarInformacion()
{
    cout << "Prestamo Personal" << endl;
    cout << "Monto: " << getMonto() << endl;
    cout << "Tasa de Interés: " << getTasaInteres() << endl;
    cout << "Plazo: " << getPlazo() << endl;
    cout << "El interes que debe pagarse es de: " << calcularInteres() << endl;
}

void Personal::ingresarDatos() {
    std::cout << "Ingrese el monto del prestamo personal: ";
    std::cin >> monto;
    std::cout << "Ingrese el plazo en dias: ";
    std::cin >> plazo;
}