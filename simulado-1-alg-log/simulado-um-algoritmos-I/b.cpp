#include <stdio.h>

int main(){
    float x, y, troco;

    scanf("%f %f", &x, &y);

    int valorFig = x / y;
    troco = x -(valorFig * y);

    printf("%d %.2f\n", valorFig, troco);

    return 0;

}