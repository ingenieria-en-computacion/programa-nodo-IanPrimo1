#include "nodo.h"

Nodo* asignarDato(Nodo* nodo, int nuevoValor) {
    if (nodo != NULL) {
        nodo->dato = nuevoValor;
    }
    return nodo;
}
