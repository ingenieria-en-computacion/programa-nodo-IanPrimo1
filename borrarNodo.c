#include "nodo.h"
Nodo* borrarNodo(Nodo* nodo) {
    if (nodo != NULL) {
        free(nodo);
    }
    return NULL;
}
