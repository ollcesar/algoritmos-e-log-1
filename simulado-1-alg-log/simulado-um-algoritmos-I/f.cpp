#include <stdio.h>

int main(){

    double a, b;
    scanf("%lf %lf", &a, &b);
    int divisao = a / b;
    double total = a - ( divisao*b );
    printf("%.0lf\n", total);
    return 0;
    
}