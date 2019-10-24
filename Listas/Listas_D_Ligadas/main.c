#include"listadl.h"

int
main ()
{
  struct ListaDL *lista = NULL;
  int i;
  for (i = 0; i < 5; i++)
    {
      insertarListaDL (&lista, i);
    }
  printf ("\n\n");
  mostrarListaDL (lista);
  printf ("\n\n");
  mostrarListaDL_back (lista);
  printf ("\n\n");
  eliminarListaDL (&lista, 3);
  printf ("\n\n");
  mostrarListaDL (lista);
  printf ("\n\n");
  mostrarListaDL_back (lista);
  printf ("\n\n");
  eliminarListaDL (&lista, 0);
  printf ("\n\n");
  mostrarListaDL (lista);
  printf ("\n\n");
  mostrarListaDL_back (lista);
  printf ("\n\n");
  eliminarListaDL (&lista, 4);
  printf ("\n\n");
  mostrarListaDL (lista);
  printf ("\n\n");
  mostrarListaDL_back (lista);
  printf ("\n\n");
  return 0;
}
