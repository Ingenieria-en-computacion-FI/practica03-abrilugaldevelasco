#include <stdio.h>
#include "nodo.h"

int main()
{
    printf("Prueba del TAD Nodo\n");
    Nodo* n = crearNodo(10);
    if (n != NULL) {
        printf("Valor actual del nodo: %d\n", obtenerValor(n));
    asignarValor(n, 25);
    if (n != NULL) {
        printf("Nuevo valor tras asignarValor: %d\n", obtenerValor(n));
    destruirNodo(n);
    printf("Memoria liberada correctamente.\n");

    return 0;
}
