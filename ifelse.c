#include <stdio.h>
int main ()
{
    int     x;
    int     y = 18;
    printf("inserisci l'età\n 18");
    scanf("%d", &x);

    if(x>=y)
    {
        printf("è maggiorenne");
    }
    else
    {
        printf("è minorenne");
    }
}