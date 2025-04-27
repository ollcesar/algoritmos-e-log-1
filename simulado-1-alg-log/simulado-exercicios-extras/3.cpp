#include <stdio.h> 

int main(){

    int numero, resto;
    scanf("%d", &numero);
    int soma = 0;
    while(numero > 0){
        resto = numero % 10;
        soma = soma + resto;
        numero = numero / 10;
    }

    printf("%d\n", soma);

    return 0;

}