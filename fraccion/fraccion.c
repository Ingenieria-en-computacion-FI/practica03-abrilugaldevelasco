#include <stdio.h>
#include <stdlib.h>
#include "fraccion.h"

struct Fraccion {
    int numerador;
    int denominador;
};

int mcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b) {
        a %= b;
        int t = a; a = b; b = t;
    }
    return a;
}


Fraccion* crearFraccion(int num, int den) {
    if (den == 0) return NULL;

    Fraccion* f = (Fraccion*)malloc(sizeof(Fraccion));
    if (f) {
        f->numerador = num;
        f->denominador = den;
        simplificar(f);
    }
    return f;
}

void simplificar(Fraccion* f) {
    if (!f) return;
    int divisor = mcd(f->numerador, f->denominador);
    f->numerador /= divisor;
    f->denominador /= divisor;
}

Fraccion* sumar(Fraccion* a, Fraccion* b) {
    if (!a || !b) return NULL;
    int n = (a->numerador * b->denominador) + (b->numerador * a->denominador);
    int d = a->denominador * b->denominador;
    return crearFraccion(n, d);
}

void imprimir(Fraccion* f) {
    if (!f) return;
    printf("%d/%d\n", f->numerador, f->denominador);
}

void destruir(Fraccion* f) {
    free(f);
}
