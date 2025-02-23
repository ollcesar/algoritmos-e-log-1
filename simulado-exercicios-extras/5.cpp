

/*Exemplo de Entrada | Exemplo de Saída
5                  | 120
3                  | 6
*/
#include <stdio.h>

int main(){

    //5*4*3*2*1
    int numero, soma = 1;
    scanf("%d", &numero);
    for(int i = 1; i < numero; i++){
        soma = i * soma;
    }
    printf("%d", soma);


    return 0;
}