#include "Automovil.h"
#include <iostream>
#include <string>
using namespace std;

Automovil::Automovil(double monto, double tasaInteres, int plazo) : Prestamo(monto, tasaInteres, plazo) {}

double Automovil::calcularInteres()
{
    double i = tasaInteres / 12 / 100;
    return (monto * i) / (1 - pow(1 + i, -plazo)); //POW calcula potencias
}

void Automovil::mostrarInformacion()
{
    std::cout << "Prestamo Automovil" << endl;
    std::cout << "Monto: " << monto << endl;
    std::cout << "Tasa de Interes: " << tasaInteres << "% anual" << endl;
    std::cout << "Plazo: " << plazo << " meses" << endl;
    std::cout << "Cuota Mensual de interés que debe pagarse es de: " << calcularInteres() << endl;
}

void Automovil::ingresarDatos() {
    std::cout << "Ingrese el monto del prestamo de automóvil: ";
    std::cin >> monto;
    std::cout << "Ingrese el plazo en meses: ";
    std::cin >> plazo;
}