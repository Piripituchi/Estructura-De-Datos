#ifndef __LISTA_D_LIGADA__
#define __LISTA_D_LIGADA__

#include<stdlib.h>
#include<stdio.h>
struct ListaDL
{
  int dato;
  struct ListaDL *siguiente;
  struct ListaDL *anterior;
};
void insertarListaDL (struct ListaDL **, int);

void mostrarListaDL (struct ListaDL *);

void mostrarListaDL_back (struct ListaDL *);

void eliminarListaDL (struct ListaDL **, int);

#endif
