#include <stdio.h>

double radiceQuadrata(double numero) 
{
  double approssimazione = numero / 2.0;
  double differenza = numero - approssimazione * approssimazione;
  while (differenza > 0.00001)
   {
    approssimazione = (approssimazione + numero / approssimazione) / 2.0;
    differenza = numero - approssimazione * approssimazione;
   }
  return approssimazione;
}

int main()
 {
  double numero;
  printf("inserici un numero");
  scanf("%lf", &numero);
  double risultato = radiceQuadrata(numero);
  printf("La radice quadrata di %lf è %lf", numero, risultato);
  return 0;
}