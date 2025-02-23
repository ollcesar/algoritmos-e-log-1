/*
Problema 1: Média Aritmética
Faça um programa que calcule a média aritmética de três números.

ENTRADA
A entrada consiste em três números inteiros A, B e C (1 ≤ A, B, C ≤ 100).

SAÍDA
A saída deve ser a média aritmética dos três números, com duas casas decimais.

Exemplo de Entrada | Exemplo de Saída
10 20 30           | 20.00
5 10 15            | 10.00*/

#include <stdio.h>

int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", (a+b+c)/3);

    return 0;
}