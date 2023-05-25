
#include <string.h>
#include "estructuraeditcliente.h"
#include "estructuradelasuma.h"

using namespace std;

int main(int argc, char const *argv[])
{

    int op, codigo;
    cliente clt;

    do
    {
        system("cls");
        op = menu();
        switch (op)
        {
        case 1:
             system("cls");
            cout << "ID: ";
            cin >> clt.id;
            cout << "NOMBRES: ";
            scanf (" %[^\n]", clt.nombres);
            cout << "APELLIDOS: ";
            scanf (" %[^\n]", clt.apellidos);
            cout << "CIUDAD: ";
            cin >> clt.ciudad;
            cout << "DIRECCION: ";
            scanf (" %[^\n]", clt.direccion);
            cout << "TELEFONO: ";
            scanf (" %[^\n]", clt.telefono);

            agregarCliente(clt);
            cout << "Registro agregado...";
            system("pause");
            break;
        case 2:
            system("cls");
            cout << "ID: ";
            cin >> clt.id;
            cout << "NOMBRES: ";
            scanf (" %[^\n]", clt.nombres);
            cout << "APELLIDOS: ";
            scanf (" %[^\n]", clt.apellidos);
            cout << "CIUDAD: ";
            cin >> clt.ciudad;
            cout << "DIRECCION: ";
            scanf (" %[^\n]", clt.direccion);
            cout << "TELEFONO: ";
            scanf (" %[^\n]", clt.telefono);
            
            
            editarCliente(clt);
            cout << "Registro modificado...";
            system("pause");
            break;
        case 3:
            cout << "Escribe el ID del Cliente: ";
            cin >> codigo;
            eliminarCliente(codigo);
            system("pause");
            break;
        case 4:
            cout << "Escribe el ID del Cliente: ";
            cin >> codigo;
            buscarCliente(codigo);
            
            system("pause");
            break;
        case 7:
            mostrarRegistros();
            system("pause");
            break;
        case 8:
            break;
        default:
            cout << "Opcion invalida.. \n";
            system("pause");
            break;
        }
    } while (op != 8);

     Producto inventario[30];

   
    for (int i = 0; i < 30; i++) {
        inventario[i].nombre = "Producto " + to_string(i+1);
        inventario[i].precio = 10.00;
        inventario[i].cantidad = 5;
    }

   
    int cantidadComprar = 0;
    cout << "Ingrese la cantidad de productos a comprar: ";
    cin >> cantidadComprar;

    
    float costoTotal = 0.0;
    bool descuentoAplicado = false;
    for (int i = 0; i < 30; i++) {
        if (cantidadComprar == 0) {
            break;
        }
        int cantidadComprarProducto = min(cantidadComprar, inventario[i].cantidad);
        costoTotal += inventario[i].precio * cantidadComprarProducto;
        cantidadComprar -= cantidadComprarProducto;
        inventario[i].cantidad -= cantidadComprarProducto;
    }

    
    if (cantidadComprar == 0 && costoTotal > 30.00) {
        costoTotal *= 0.85;
        descuentoAplicado = true;
    }

   
    costoTotal *= 1.05;

   
    cout << "Costo total, incluyendo un impuesto del 5% IVA: $" << costoTotal << endl;
    if (descuentoAplicado) {
        cout << "descuento aplicado!" << endl;
    }
}


