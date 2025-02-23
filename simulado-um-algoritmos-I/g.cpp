#include <stdio.h>

int main(){

    float etanol, gasolina;

    scanf("%f %f", &etanol, &gasolina);

    float conta = gasolina - (gasolina*0.27);

    if(etanol <= conta){
        printf("ETANOL\n");
    }else{
        printf("GASOLINA\n");
    }
}