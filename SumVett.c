/* Scrivi una programma C che, dopo aver chiesto all'utente tre numeri interi, li memorizzi all'interno di un vettore, li sommi, ne calcoli la media e infine stampi tutti i dati e i risultati */ 

#include <stdio.h>
#include <math.h>

int main()
{ 
  int s; /*S rappresenta la somma */  
  const int MAX = 3;
  double m; /*Rappresenta la media*/ 
  int v[MAX]; 

  /* input di 3 variabili intere */
  printf("inserisci il primo numero");
  scanf("%d", &v[0]);

  printf("inserisci il secondo numero");
  scanf("%d", &v[1]);

  printf("inserisci il terzo numero");
  scanf("%d", &v[2]);
  
  s = v[0] + v[1] + v[2];

  m = (double) s / 3.0;
  printf ("%f", m );
  return 0;
}
