/*
Problema 2: Números Pares
Faça um programa que, dado um número inteiro N, imprima todos os números pares de 0 até N (inclusive).

ENTRADA
A entrada é um número inteiro N (0 ≤ N ≤ 100).

SAÍDA
A saída deve ser todos os números pares de 0 até N, separados por um espaço.

Exemplo de Entrada | Exemplo de Saída
10                 | 0 2 4 6 8 10
7                  | 0 2 4 6*/

#include <stdio.h>

int main(){

    int numero;
    scanf("%d", &numero);
    int i = 0;
    while(i <= numero){
        if ((i%2) == 0){
            printf("%d\n", i);   
        }
        i++;

    }
    return 0;
}