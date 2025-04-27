#include <stdio.h>

int main(){

    int limite, v1, v2;
    
    scanf("%d %d %d", &limite, &v1, &v2);

    if(v1>v2){
        printf("%d\n", (v1-v2));

    }else if(v1<v2){
        printf("%d\n", (v2-v1));

    }

    return 0;

}