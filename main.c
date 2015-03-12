#include <stdio.h>
#include <stdlib.h>
#include "Listas.h"
int main()
{
   FILE *fr = fopen("elementos.in", "r");
   int entrada, n, i;
   Lista lista;

   vacia(&lista);
   printf("%d \n", esVacia(lista));
   fscanf(fr, "%d", &n);
   for(i = 1; i <= n; i++)
   {
       fscanf(fr, "%d", &entrada);
       insertar(&lista, entrada, i);
       imprimir(lista);
   }
    return 0;
}
