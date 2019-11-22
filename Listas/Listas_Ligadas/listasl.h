#ifndef __LISTAS_LIGADAS__
#define __LISTAS_LIGADAS__

#include <stdlib.h>
#include <stdio.h>

struct ListaL
{
  int dato;
  struct ListaL *siguiente;
};

void insertarListaL (struct ListaL **, int);

void mostrarListaL (struct ListaL *);

void insertarListaL_back (struct ListaL **, int);

struct ListaL *buscarListaL (struct ListaL *, int);

void eliminarListaL (struct ListaL **, int);

#endif
