#include <stdio.h>
int main()
{
    int a;
    printf("inserisci un anno");
    scanf("%d", &a);
    
    if(a%400 == 0);
    {
        printf("è bisestile");
    
        else if(a%100 == 0)
        {
            printf("non è bisestile");
        }
        else if(a%4 == 0 )
        {
            printf("è bisestile");
        }

    }
}