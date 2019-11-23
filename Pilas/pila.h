#ifndef __PILA__
#define __PILA__

#include<stdio.h>
#include<stdlib.h>

struct Pila{
	int dato;
	struct Pila *cima;
};

void pushPila(struct Pila **, int);

int popPila(struct Pila**);

void mostrarPila(struct Pila*);

#endif
