#include"listadl.h"

void
insertarListaDL (struct ListaDL **lista, int x)
{
  struct ListaDL *aux = NULL;
  aux = (struct ListaDL *) malloc (sizeof (struct ListaDL));
  if (*lista)
    {

      aux->siguiente = (*lista);
      aux->anterior = NULL;
      aux->dato = x;
      (*lista)->anterior = aux;
      (*lista) = aux;
    }
  else
    {

      aux->siguiente = (*lista);
      aux->anterior = NULL;
      aux->dato = x;
      (*lista) = aux;
    }
}

void
mostrarListaDL (struct ListaDL *lista)
{
  while (lista)
    {
      printf ("%i - > ", lista->dato);
      lista = lista->siguiente;
    }
}

void
mostrarListaDL_back (struct ListaDL *lista)
{
  while (lista->siguiente)
    {
      lista = lista->siguiente;
    }
  while (lista)
    {
      printf ("%i - > ", lista->dato);
      lista = lista->anterior;
    }
}


void
eliminarListaDL (struct ListaDL **lista, int dato)
{
  struct ListaDL *aux = NULL;
  aux = (*lista);
  while (aux->dato != dato)
    {
      aux = aux->siguiente;
    }
  if ((*lista)->dato == dato)
    {
      (*lista) = (*lista)->siguiente;
      aux->siguiente->anterior = NULL;
      return;
    }
  if (aux->siguiente == NULL)
    {
      aux->anterior->siguiente = NULL;
      aux->anterior = NULL;
      return;
    }
  aux->siguiente->anterior = aux->anterior;
  aux->anterior->siguiente = aux->siguiente;
  free (aux);

}
