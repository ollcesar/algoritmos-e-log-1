#include <bits/stdc++.h>
using namespace std;

int main(){

    char frase[1001] = "Carlos, que felicidade!";

    int tanto;
    cin >> tanto;

    int tamanho = strlen(frase);
    for(int i = tamanho; i > 1; i--){

        frase[i + tanto - 1] = frase[i];

    }

    for(int i = 1; i < 2+tanto-1; i++){

        frase[i] = 'a';
    }

    cout << frase << endl;

}