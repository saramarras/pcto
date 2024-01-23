#include <stdio.h>
int main ()
{
    float     x;
    float     kelvin;
    float     fahrenheit;
    

    
    printf("inserisci la temperatura in celsius\n");
    scanf("%f", &x);

    
    kelvin = x + 273.15;
    fahrenheit = (9/5) * x + 32;
    

    printf("%f\n", kelvin);
    printf("%f\n", fahrenheit);
    

   
    if(x<-273.15 )
    {
        printf("errore");
    }
   
}