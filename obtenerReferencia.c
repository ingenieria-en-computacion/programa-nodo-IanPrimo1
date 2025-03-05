#include "nodo.h"
Nodo* obtenerReferencia(Nodo* nodo) {
    if (nodo != NULL) {
        return nodo->siguiente;
    }
    return NULL; 
}
