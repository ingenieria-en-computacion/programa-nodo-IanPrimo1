#include "nodo.h"
int obtenerDato(Nodo* nodo) {
    if (nodo != NULL) {
        return nodo->dato;
    }
    return -1; 
}
