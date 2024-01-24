#include <stdio.h>
int main()
{
    int allunaggio = 1969;
    int nascita;
    int prima;
    int dopo;
    printf("inserisci anno di nascita");
    scanf("%d", &nascita);
    prima = allunaggio - nascita;
    dopo = nascita - allunaggio;
    
    if(nascita == 1969)
    {
        printf("sei nato nell'anno dell'allunaggio");
    }
    else if(nascita<1969)
    {
        printf("sei nato %d anni prima",prima);
    }
    else if(nascita>1969)
    {
        printf("sei nato %d anni dopo", dopo);
    }

}