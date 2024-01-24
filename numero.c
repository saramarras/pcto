#include <stdio.h>
int main()
{
    int n;
    int x = 2;
    printf("inserisci un numero");
    scanf("%d", &n);
    while(x<n)
    {
        
        if(n%x == 0)
        {
            printf("non è un numero primo");
            break ;
        }
        else
        {
            x = x + 1;
        }
    
    }
    
    if(n==x)
    {
        printf("è un numero primo");
    }
    return(0);
}