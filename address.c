/*Scrivi un programma C che stampa il valore dell'indirizzo di una variabile float dopo averlo memorizzato in un puntatore.*/

#include <stdio.h>

int main()
{
/* dichiarazione */ 
  float a;
/* puntatore */
  float *P_a;
/* assegnazione della variabile al corrispettivo puntatore */ 
  P_a = &a ;
  /* stampa */ 
  printf("L'indirizzo di a e': %p\n", P_a);



return 0;
}

