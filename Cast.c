/*Scrivi un programma in C che chiede all' utente di inserire un valore in virgola mobile (double) , lo converte in intero e quindi stampa entrambi i valori */
#include <stdio.h>
int main()
{
/*dichiarazione*/
double a;
/*inserimento*/
printf("inserisci un valore in virgola mobile");
scanf("%lf",&a);
/*cast*/
int b = (int)a;
/*stampe*/
printf("il tuo numero in virgola mobile e' %f\n",a);
printf("il tuo numero in virgola mobile e' %d\n",b);

return 0;
}
