#include <stdio.h>
int main()
{
int     a;
int     b;
int     c;
int     d;
int     e;
int     somma;

printf("inserisci l'età di a");
scanf("%d", &a);
printf("inserisci l'età di b");
scanf("%d", &b);
printf("inserisci l'età di c");
scanf("%d", &c);
printf("inserisci l'età di d");
scanf("%d", &d);
printf("inserisci l'età di e");
scanf("%d", &e);

somma = a + b + c + d + e; 

printf("la somma delle età è: %d\n", somma);
printf("l'età di a è: %d\n", a);
printf("l'età di b è: %d\n", b);
printf("l'età di c è: %d\n", c);
printf("l'età di d é: %d\n", d);
printf("l'età di e é: %d\n", e);
}