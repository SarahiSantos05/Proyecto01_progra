#pragma once
#include "Prestamo.h"

class Automovil : public Prestamo
{
public:
    Automovil(double monto, double tasaInteres, int plazo);


    double calcularInteres() override;
    void mostrarInformacion() override;
    void ingresarDatos() override;
};

