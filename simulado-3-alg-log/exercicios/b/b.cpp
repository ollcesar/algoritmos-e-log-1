#include <bits/stdc++.h>
using namespace std;

int main(){

    char frase[1001];
    char letra[2];

    cin >> letra;

    cin.ignore();
    cin.getline(frase, 1001);

    int caracteresNumero = strlen(frase);

    int contador = 0;

    int temp = 0;
    while(contador < caracteresNumero){

        if(tolower(frase[contador]) == tolower(letra[0])){   

            temp+=1;
        }


        contador++;
    }


    cout << temp << endl;


}