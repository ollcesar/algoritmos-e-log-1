#include <bits/stdc++.h>
using namespace std;

struct lista
{
    double valor;
    char item[51];
};

int main(){

    lista lista[4];

    for(int i = 0; i < 4; i++){

        cin >> lista[i].valor;
        cin.ignore();
        cin.getline(lista[i].item, 51);

    }

    double temp1 = lista[0].valor;
    char temp2[51];
    strcpy(temp2, lista[0].item);

    for(int i = 0; i < 4; i++){

        if(lista[i].valor < temp1){
            temp1 = lista[i].valor;
            strcpy(temp2, lista[i].item);
        }
    }

    printf("%.2f %s\n", temp1, temp2);

    
    return 0;
}
