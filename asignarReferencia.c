#include "nodo.h"
Nodo** asignarReferencia(Nodo** destino, Nodo* origen) {
    if (destino != NULL) {
        *destino = origen;
    }
    return destino;
}
