#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {

    cout << "Nombre: Elder Geovani Samayoa Esquivel" << endl;
    cout << "Programa: Lista Enlazada Dinamica" << endl << endl;

    Nodo* head = NULL;
    Nodo* actual = NULL;
    Nodo* nuevo = NULL;

    int valor;
    char opcion = 's';

    int cantidad = 0;
    int suma = 0;

    while(opcion == 's') {

        cout << "Ingrese un numero: ";
        cin >> valor;

        // Crear nodo dinámicamente
        nuevo = new Nodo();

        nuevo->dato = valor;
        nuevo->siguiente = NULL;

        // Insertar nodo en la lista
        if(head == NULL) {
            head = nuevo;
        }
        else {
            actual = head;

            while(actual->siguiente != NULL) {
                actual = actual->siguiente;
            }

            actual->siguiente = nuevo;
        }

        cantidad++;
        suma += valor;

        cout << "Desea ingresar otro numero? (s/n): ";
        cin >> opcion;

        cout << endl;
    }

    // Recorrer lista
    cout << endl;
    cout << "Lista generada:" << endl << endl;

    actual = head;

    while(actual != NULL) {
        cout << actual->dato << " -> ";
        actual = actual->siguiente;
    }

    cout << "NULL" << endl << endl;

    // Calculos
    float promedio = 0;

    if(cantidad > 0) {
        promedio = (float)suma / cantidad;
    }

    cout << "Cantidad de nodos: " << cantidad << endl;
    cout << "Suma de valores: " << suma << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}