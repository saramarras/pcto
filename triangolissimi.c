#include <stdio.h>
int main()
{
    int La;
    int Lb;
    int Lc;
    int x = La + Lb;
    int y = Lb + Lc;
    int z = La + Lc;
    printf("inserisci la misura del primo lato");
    scanf("%d", &La);
    printf("inserisci la misura del secondo lato");
    scanf("%d", &Lb);
    printf("inserisci la misura del terzo lato");
    scanf("%d", &Lc);

    if(x>Lc || y>La || z>Lb)
    {
        printf("non è un triangolo!");
    }
    else if (La == Lb && La != Lc)
    {
        printf("il triangolo è isoscele");
    }
    else if (La!=Lb && Lb!=Lc)
    {
        printf("il triangolo è scaleno");
    }
    else if (La == Lb && Lb == Lc)
    {
        printf("il triangolo è equilatero");
    }
    else if(La==0 || Lb==0 || Lc==0)
    {
        printf("non è un triangolo!");
    }
}