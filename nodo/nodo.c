#include "nodo.h"
#include <stdlib.h>
#include <stdio.h>

// Definimos la estructura aquí para que sea privada
struct Nodo {
    int dato;
};

Nodo* crearNodo(int valor) {
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    if (nuevo) {
        nuevo->dato = valor;
    }
    return nuevo;
}

int obtenerValor(Nodo* n) {
    if (!n) return 0;
    return n->dato;
}

void asignarValor(Nodo* n, int nuevoValor) {
    if (n) {
        n->dato = nuevoValor;
    }
}

void destruirNodo(Nodo* n) {
    if (n) {
        free(n);
    }
}
