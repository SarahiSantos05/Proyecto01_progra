#include "Hipotecario.h"
#include <iostream>
#include <string>
using namespace std;

Hipotecario::Hipotecario(double monto, double tasaInteres, int plazo, double euribor, double diferencial) :Prestamo(monto, tasaInteres, plazo), euribor(euribor), diferencial(diferencial) {}

Hipotecario::~Hipotecario() {}

double Hipotecario::getEuribor()
{
    return euribor;
}

void Hipotecario::setEuribor(double euribor)
{
    this->euribor = euribor;
}

double Hipotecario::getDiferencial()
{
    return diferencial;
}

void Hipotecario::setDiferencial(double diferencial)
{
    this->diferencial = diferencial;
}

double Hipotecario::calcularInteres()
{
    return monto * (euribor + diferencial) / 12;
}

void Hipotecario::mostrarInformacion()
{
    cout << "Prestamo Hipotecario" << endl;
    cout << "Monto: " << monto << endl;
    cout << "Tasa de Interes: " << tasaInteres << "%" << endl;
    cout << "Plazo: " << plazo << " meses" << endl;
    cout << "Euribor: " << euribor << endl;
    cout << "Diferencial: " << diferencial << endl;
    cout << "El interes que debe pagarse es de: " << calcularInteres() << endl;
}

void Hipotecario::ingresarDatos() {
    std::cout << "Ingrese el monto del prestamo hipotecario: ";
    std::cin >> monto;
    std::cout << "Ingrese el plazo en meses: ";
    std::cin >> plazo;
    std::cout << "Ingrese el Euribor: ";
    std::cin >> euribor;
    std::cout << "Ingrese el Diferencial: ";
    std::cin >> diferencial;
}
