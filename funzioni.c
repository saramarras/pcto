#include <stdio.h>
void cubo()
    {
        int numero;
        int cubo;
        
        printf("inserisci un numero\n");
        scanf("%d", &numero);
        cubo= numero*numero*numero;
        printf("il cubo è: %d\n", cubo);
    }

    int main()
    {
        cubo();
        cubo();
        cubo();
        cubo();
        return(0);
    }
