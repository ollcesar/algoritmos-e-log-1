/*
Problema 4: Maior e Menor Número
Faça um programa que, dado três números inteiros, imprima o maior e o menor deles.

ENTRADA
A entrada consiste em três números inteiros A, B e C (1 ≤ A, B, C ≤ 1000).

SAÍDA
A saída deve ser o maior e o menor número, separados por um espaço.

Exemplo de Entrada | Exemplo de Saída
10 20 30           | 30 10
5 3 8              | 8 3
*/

#include <stdio.h>

int main(){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c && b > c ){
        //a, b, c.
        printf("%d %d\n", a, c);
    
    }else if(a > b && a > c && b > c ){
        printf("%d %d\n", a, b);

    }else if(b > a && b > c && a > c ){
        printf("%d %d\n", b, a);
    
    }else if(b > a && b > c && c > a ){
        printf("%d %d\n", b, c);
    
    }else if(c > a && c > b && a > b ){
        printf("%d %d\n", c, a);
    
    }else if(c > b && c > a && b > a ){
        printf("%d %d\n", c, b);
    }
    return 0;
}