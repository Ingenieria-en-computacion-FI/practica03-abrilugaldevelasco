#ifndef __NODO_H__
#define __NODO_H__

typedef struct Nodo Nodo;

Nodo* crearNodo(int valor);
int obtenerValor(Nodo* n);
void asignarValor(Nodo* n, int nuevoValor);
void destruirNodo(Nodo* n);

#endif
