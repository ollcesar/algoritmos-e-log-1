#include <stdio.h>

int main(){

    /*
  Entrada:
  20 3
  Saída:
  8
  */
double a, b;

scanf("%lf %lf", &a, &b);

int quociente = a/b;
double resto = a-(quociente*b);
double soma = quociente + resto;
printf("%.0lf\n", soma);

}