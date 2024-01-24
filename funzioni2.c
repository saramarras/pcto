#include <stdio.h>

void somma(int x, int y)
{
    printf("la somma dei numeri è: %d\n", (x+y));
}

void sottrazione(int x, int y)
{
    printf("la sottrzione dei numeri è: %d\n", (x-y));
}

void divisione(int x, int y)
{
    printf("la divisione dei numeri è: %d\n", (x/y));
}

void moltiplicazione(int x, int y)
{
    printf("la moltiplicazione dei numeri è: %d\n", (x*y));
}
void nullo()
{
    printf("ACOJONEEEE")
}

int main()
{
    int x;
    int y;
    int operazione;
    printf("inserisci il primo numero\n");
    scanf("%d", &x);
    printf("inserisci il secondo numero\n");
    scanf("%d", &y);
    printf("che operazione vuoi fare?\n");
    printf("premi\n 1 per somma\n 2 per sottrazione\n 3 per divisione\n 4 per moltiplicazione\n");
    scanf("%d", &operazione);

    if (operazione == 1)
    {
        somma(x, y);
    }
    else if (operazione == 2)
    {
        sottrazione(x, y);
    }
    else if (operazione = 3)
    {
        divisione(x, y);
    }
    else if (operazione == 4)
    {
        moltiplicazione(x, y);
    }
    else if(operazione == 5)
    {
        printf("ACOJONEEEEE");
    }

}