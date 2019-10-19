#include <stdlib.h>
#include <stdio.h>

struct ListaL{
	int dato;
	struct ListaL *siguiente;
};

void insertarListaL (struct ListaL **lista, int dato){
	struct ListaL *aux=NULL ; 
	aux=(struct ListaL *) malloc (sizeof(struct ListaL));
	aux->siguiente=(*lista);
	aux->dato=dato;
	(*lista)=aux;
}

void mostrarListaL (struct ListaL *lista){
	while(lista){
		printf("%i -> ",lista->dato);
		lista=lista->siguiente;
	}
}
void insertarListaL_back (struct ListaL **lista, int dato){
	struct ListaL *aux=NULL;
	aux=(struct ListaL *) malloc (sizeof(struct ListaL));
	aux->siguiente=(*lista);
	(*lista)=aux;
	while((*lista)->siguiente){
		(*lista)->dato=(*lista)->siguiente->dato;
		(*lista)=(*lista)->siguiente;
	}
	(*lista)->dato=dato;
	(*lista)=aux;
}

	
int main(){
	struct ListaL *lista=NULL;
	int  i;
	for(i=0;i<5;i++){
		insertarListaL (&lista,i);
	}
	mostrarListaL(lista);
	printf("\n");
	printf("\n");
	for(i=5;i>0;i--){
		insertarListaL_back (&lista,i);
	}
	mostrarListaL(lista);
	printf("\n");
	return 0;
}
