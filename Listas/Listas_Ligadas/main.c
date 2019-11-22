#include "listasl.h"

int
main ()
{
  struct ListaL *lista = NULL;
  int i;
  for (i = 0; i < 5; i++)
    {
      insertarListaL (&lista, i);
    }
  mostrarListaL (lista);
  printf ("\n \n");
  insertarListaL_back (&lista, 20);
  mostrarListaL (lista);
  printf ("\n \n");
  insertarListaL (&lista, 10);
  mostrarListaL (lista);
  printf ("\n \n");
  eliminarListaL (&lista, 10);
  eliminarListaL (&lista, 20);
  eliminarListaL (&lista, 3);
  mostrarListaL (lista);
  printf ("\n\n");
  return 0;
}
