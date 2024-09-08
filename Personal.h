#pragma once
#include "Prestamo.h"

class Personal : public Prestamo
{
public:
    Personal(double monto, double tasaInteres, int plazo);
    ~Personal();

    double calcularInteres() override;
    void mostrarInformacion() override;

    void ingresarDatos() override;
};

