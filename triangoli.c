#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;

    printf("inserisci il primo numero\n");
    scanf("%d", &a);
    printf("inserisci il secondo numero\n");
    scanf("%d", &b);
    printf("inserisci il terzo numero\n");
    scanf("%d", &c);
    
    int z= a + b;
    printf("%d", z);

    if(z<c)
    {
        printf("è un triangolo");
    }
    else
    {
        printf("non è un triangolo");
    }
    
}