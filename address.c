/*Scrivi un programma C che stampa il valore dell'indirizzo di una variabile float dopo averlo memorizzato in un puntatore.*/

#include <stdio.h>

int main()
{
/* dichiarazione */ 
  float a;
/* puntatore */
  float *a_P;
/* assegnazione della variabile al corrispettivo puntatore */ 
  a_P = &a ;
  /* stampa */ 
  printf("L'indirizzo di a e': %p\n", a_P);



return 0;
}

