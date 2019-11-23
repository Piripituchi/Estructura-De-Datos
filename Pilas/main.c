#include"pila.h"

int main(void){
	int prueba;
	struct Pila *pilaP=NULL;
	pushPila(&pilaP,1);
	pushPila(&pilaP,2019);
	pushPila(&pilaP,18);
	pushPila(&pilaP,15);
	pushPila(&pilaP,97);
	printf("\n\n");
	mostrarPila(pilaP);
	prueba=popPila(&pilaP);
	printf("\n\n prueba = %i",prueba);
	popPila(&pilaP);
	printf("\n\n");
	mostrarPila(pilaP);
	printf("\n\n");
	popPila(&pilaP);
	popPila(&pilaP);
	popPila(&pilaP);
	mostrarPila(pilaP);
	popPila(&pilaP);
	mostrarPila(pilaP);
	return 0;
}
