#pragma once
class Prestamo
{
protected:
    double monto;
    double tasaInteres;
    int plazo;

public:
    Prestamo(double monto, double tasaInteres, int plazo);
    virtual ~Prestamo();

    double getMonto();
    void setMonto(double monto);

    double getTasaInteres();
    void setTasaInteres(double tasaInteres);

    int getPlazo();
    void setPlazo(int plazo);

    virtual double calcularInteres() = 0;
    virtual void mostrarInformacion() = 0;
    virtual void ingresarDatos() = 0;
};

