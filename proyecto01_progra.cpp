#include <iostream>
#include "Banco.h"
#include "Personal.h"
#include "Hipotecario.h"
#include "Automovil.h"

using namespace std;

void MostrarMenu()
{
    cout << "Sistema de gestion de prestamos bancarios" << endl;
    cout << "1. Agregar prestamo" << endl;
    cout << "2. Eliminar prestamo" << endl;
    cout << "3. Mostrar prestamos" << endl;
    cout << "4. Calcular y mostrar el interes de cada prestamo" << endl;
    cout << "5. Salir" << endl;
    cout << "Seleccionar una opcion: ";
}

int main()
{
    Banco banco;
    int opcion;
    bool continuar = true;

    while (continuar) {
        MostrarMenu();
        cin >> opcion;

        switch (opcion) {
        case 1: {
            cout << "Seleccione el tipo de prestamo: " << endl;
            cout << "1. Personal" << endl;
            cout << "2. Hipotecario" << endl;
            cout << "3. Automovil" << endl;
            cout << "Seleccionar una opcion: ";
            int tipoPrestamo;
            cin >> tipoPrestamo;
            Prestamo* prestamo = nullptr;

            double monto;
            int plazo;

            switch (tipoPrestamo) {
            case 1:
                cout << "Ingrese el monto del prestamo personal: ";
                cin >> monto;
                cout << "Ingrese el plazo en dias: ";
                cin >> plazo;
                prestamo = new Personal(monto, 7.85, plazo);
                break;
            case 2:
                double euribor;
                double diferencial;
                cout << "Ingrese el monto del prestamo hipotecario: ";
                cin >> monto;
                cout << "Ingrese el plazo en meses: ";
                cin >> plazo;
                cout << "Ingrese el valor del Euribor: ";
                cin >> euribor;
                cout << "Ingrese el diferencial del prestamo: ";
                cin >> diferencial;
                prestamo = new Hipotecario(monto, 6.0, plazo, euribor, diferencial);
                break;
            case 3:
                cout << "Ingrese el monto del prestamo de automovil: ";
                cin >> monto;
                cout << "Ingrese el plazo en meses:";
                cin >> plazo;
                prestamo = new Automovil(monto, 9.75, plazo);
                break;
            default:
                cerr << "Opcion no valida" << endl;
                continue;
            }

            prestamo->ingresarDatos();
            banco.agregarPrestamo(prestamo);
            cout << "prestamo agragado" << endl;
            break;
        }

        case 2: {
            cout << "Ingrese el indice del prestamo a eliminar: " << endl;
            int indice;
            cin >> indice;
            banco.eliminarPrestamo(indice);
            cout << "Prestamo eliminado" << endl;
            break;
        }

        case 3: {
            banco.mostrarPrestamos();
            break;
        }

        case 4: {
            banco.calcularInteres();
            break;
        }
        case 5: {
            continuar = false;
            cout << "Saliendo del programa" << endl;
            break;
        }
        default:
            cout << "Opcion no valida. Intente de nuevo." << endl;
            break;
        }

    }
}