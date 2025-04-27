#include <bits/stdc++.h>
using namespace std;

int main(){

    char palavra[101];
    cin >> palavra;
    int fim = strlen(palavra) -1;

    int valor;
    for(int inicio = 0; inicio < fim; inicio++){

        if(palavra[inicio] != palavra[fim]){
            cout << "nao" << endl;
            valor = false;
            break;
        }else{
            valor = true;
        }

        fim--;
    }

    if(valor == true){
        cout << "sim" << endl;
    }



    return 0;



}