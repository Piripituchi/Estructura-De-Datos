#include "listasl.h"

void
insertarListaL (struct ListaL **lista, int dato)
{
  struct ListaL *aux = NULL;
  aux = (struct ListaL *) malloc (sizeof (struct ListaL));
  aux->siguiente = (*lista);
  aux->dato = dato;
  (*lista) = aux;
}

void
mostrarListaL (struct ListaL *lista)
{
  while (lista)
    {
      printf ("%i -> ", lista->dato);
      lista = lista->siguiente;
    }
}

void
insertarListaL_back (struct ListaL **lista, int dato)
{
  struct ListaL *aux = NULL;
  aux = (struct ListaL *) malloc (sizeof (struct ListaL));
  aux->siguiente = (*lista);
  (*lista) = aux;
  while (aux->siguiente)
    {
      aux->dato = aux->siguiente->dato;
      aux = aux->siguiente;
    }
  aux->dato = dato;
}

struct ListaL *
buscarListaL (struct ListaL *lista, int dato)
{
  while (lista)
    {
      if (lista->dato == dato)
	{
	  return lista;
	}
      lista = lista->siguiente;
    }
  return NULL;
}

void
eliminarListaL (struct ListaL **lista, int dato)
{
  struct ListaL *aux = NULL;
  aux = buscarListaL (*lista, dato);
  struct ListaL *aux2 = NULL;
  if (aux == NULL)
    {
      return;
    }
  if (aux == *lista)
    {
      (*lista) = (*lista)->siguiente;
      free (aux);
      return;
    }
  if (aux->siguiente == NULL)
    {
      aux2 = (*lista);
      while (aux2->siguiente != aux)
	{
	  aux2 = aux2->siguiente;
	}
      aux2->siguiente = NULL;
      free (aux);
      return;
    }
  aux2 = (*lista);
  while (aux2->siguiente != aux)
    {
      aux2 = aux->siguiente;
    }
  aux2->siguiente = aux2->siguiente->siguiente;
  free (aux);


}
