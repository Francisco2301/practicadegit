#include <iostream>
#include <string.h>
#define MAX 50
#define MAX 30
using namespace std;

typedef struct
{
    int id;
    char nombres[MAX];
    char apellidos[MAX];
    char ciudad[MAX];
    char direccion[_MAX_DIR];
    char telefono[MAX];

} cliente;

cliente clientes[MAX];
int ultReg = 0;

void agregarCliente(cliente clt);
void editarCliente(cliente clt);
void eliminarCliente(int id);
void buscarCliente(int id);
void buscarClientePorNombre(char nombre[]);
void buscarClientePorApellidos(char apellido[]);
void mostrarRegistros();
int menu();

void agregarCliente(cliente clt)
{
    clientes[ultReg] = clt;
    ultReg++;
}

void editarCliente(cliente clt)
{
    int b = 0;
    for (int i = 0; i < ultReg; i++)
    {
        if (clientes[i].id == clt.id)
        {
            b = i;
            break;
        }
    }
    if (b = !0)
    {
        clientes[b] = clt;
    }
    else
    {
        cout << "El cliente que esta buscando no existe. Verifique y vuela a intenta...\n";
    }
}

void eliminarCliente(int id)
{
    int b = 0;
    for (int i = 0; i < ultReg; i++)
    {
        if (clientes[i].id == id)
        {
            b = i;
            break;
        }
    }
    for (int i = b; i < ultReg - 1; i++)
    {
        clientes[i] = clientes[i + 1];
    }
    ultReg--;
}

void buscarCliente(int id)
{
    int posicion = 0;
    for (int i = 0; i < ultReg; i++)
    {
        if (clientes[i].id == id)
        {
            posicion = i;

            break;
        }
    }
    cout << "lo encontre en la posicion " << posicion << endl;
    cout << clientes[posicion].id << endl;
    cout << clientes[posicion].nombres << endl;
    cout << clientes[posicion].apellidos << endl;
    cout << clientes[posicion].ciudad << endl;
    cout << clientes[posicion].direccion << endl;
   
    cout << clientes[posicion].telefono << endl;
    cout <<"****************************"<<endl;
    //return clientes[posicion];
}

void buscarClientePorNombre(char nombre[])
{
    int pos = 0;
    for (int i = 0; i < ultReg; i++)
    {
        if (strcmp(clientes[i].nombres, nombre) == 0)
        {
            pos = i;
            break;
        }
    }
    if (pos = !0)
    {
        cout << clientes[pos].id << endl;
        cout << clientes[pos].nombres << endl;
        cout << clientes[pos].apellidos << endl;
        cout << clientes[pos].ciudad << endl;
        cout << clientes[pos].direccion << endl;
        
        cout << clientes[pos].telefono << endl;
    }
    else
    {
        cout << "No encontro el cliente...\n";
    }
}

void buscarClientePorApellidos(char apellido[])
{
    int pos = 0;
    for (int i = 0; i < ultReg; i++)
    {
        if (strcmp(clientes[i].apellidos, apellido) == 0)
        {
            pos = i;
            break;
        }
    }
    if (pos = !0)
    {
        cout << clientes[pos].id << endl;
        cout << clientes[pos].nombres << endl;
        cout << clientes[pos].apellidos << endl;
        cout << clientes[pos].ciudad << endl;
        cout << clientes[pos].direccion << endl;
        
        cout << clientes[pos].telefono << endl;
    }
    else
    {
        cout << "No encontro el cliente...\n";
    }
}

int menu()
{
    int op;
    cout << "1. Agregar cliente \n";
    cout << "2. Modificar Cliente\n";
    cout << "3. Eliminar Cliente\n";
    cout << "4. Buscar cliente por codigo \n";
    cout << "5. Buscar cliente por nombre \n";
    cout << "6. Buscar cliente por apellido \n";
    cout << "7. Mostrar registros\n";
    cout << "8. Salir \n";
    cout << "Escribe la opcion: ";
    cin >> op;
    return op;
}

void mostrarRegistros()
{
    for (int i = 0; i < ultReg; i++)
    {
        cout << clientes[i].id << endl;
        cout << clientes[i].nombres << endl;
        cout << clientes[i].apellidos << endl;
        cout << clientes[i].ciudad << endl;
        cout << clientes[i].direccion << endl;
       
        cout << clientes[i].telefono << endl;
    }
}