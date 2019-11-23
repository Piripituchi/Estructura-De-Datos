#include"pila.h"

void pushPila(struct Pila** pila, int x){
	struct Pila *nuevo=NULL;
	nuevo=(struct Pila *) malloc (sizeof(struct Pila));
	nuevo->dato=x;
	if(!pila){
		(*pila)=nuevo;
		return;
	}
	nuevo->cima=(*pila);
	(*pila)=nuevo;
}

int popPila(struct Pila** pila){
	int temp;
	struct Pila *aux=NULL;
	if(!pila){
		printf("La pila ya se encuentra vacia");
		return -1;
	}
	if(!(*pila)->cima){
		printf("La pila ya se encuentra vacia");
		return (-1);
	}
	aux=(*pila);
	(*pila)=(*pila)->cima;
	temp=aux->dato;
	free(aux);
	return temp;
}

void mostrarPila(struct Pila* pila){
	while(pila){
		printf("%d, ",pila->dato);
		pila=pila->cima;
	}
}

