#include <bits/stdc++.h>
using namespace std;

int main(){

    char frase[501];
    char limpa[501];
    int valor = true;

    while(cin.getline(frase, 501)){

        int j = 0;

        for(int i = 0; frase[i] != '\0'; i++){

            if(isalpha(frase[i])){
                limpa[j] = tolower(frase[i]);
                j++;
            }
        }
    
        limpa[j] = '\0';

        int inicio = 0;
        int fim = strlen(limpa)-1;

        while(inicio < fim){

            if(limpa[inicio] != limpa[fim]){
                valor = false;
                cout << "nao" << endl; 
                break;
            }else{
                valor = true;
            }
            inicio++;
            fim--;
        }
        if(valor == true){
            cout << "sim" << endl;
        }
    }







}