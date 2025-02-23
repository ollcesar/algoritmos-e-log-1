#include <stdio.h>

int main(){

    int a;

    scanf("%d", &a);

    if(a < 10){
        printf("40\n");
    }else if(a >= 10 && a < 15){
        printf("60\n");
    }else if(a >= 15 && a < 20){
        printf("79\n");
    }else if(a >= 20 && a < 25){
        printf("97\n");
    }else if(a >= 25 && a < 30){
        printf("114\n");
    }else if(a >= 30 && a < 35){
        printf("130\n");
    }else if(a >= 35 && a < 40){
        printf("145\n");
    }else if(a >= 40 && a < 45){
        printf("159\n");
    }else if(a >= 45 && a < 50){
        printf("172\n");
    }
    return 0;
}