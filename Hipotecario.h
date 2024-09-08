#pragma once
#include "Prestamo.h"

class Hipotecario : public Prestamo
{
private:
    double euribor;
    double diferencial;

public:
    Hipotecario(double monto, double tasaInteres, int plazo, double euribor, double diferencial);
    ~Hipotecario();

    double getEuribor();
    void setEuribor(double euribor);

    double getDiferencial();
    void setDiferencial(double diferencial);

    double calcularInteres() override;
    void mostrarInformacion() override;
    void ingresarDatos() override;
};

