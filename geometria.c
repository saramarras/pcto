#include <stdio.h>
int main()
{
    int La;
    int Lb;
    int base;
    int h;
    int perimetro;
    int area;
    printf("inserisci il primo lato del triangolo\n");
    scanf("%d", &La);
    printf("inserisci il secondo lato del triangolo\n");
    scanf("%d", &Lb);
    printf("inserisci la base del triangolo\n");
    scanf("%d", &base);
    printf("inserisci l'altezza del triangolo\n");
    scanf("%d", &h);
    perimetro = La + Lb + base;
    area = base*h/2;
    printf("perimetro: %d\n", perimetro);
    printf("area: %d\n", area);

}