#include <bits/stdc++.h>
using namespace std;

int main(){

    string frase;
    getline(cin, frase);

    bool condicao = false;

    int tamanho = frase.length();

    int inicio = 0;
    int fim = tamanho - 1;

    for(int i = 0; i < tamanho; i++){

        if(frase[inicio] != frase[fim]){
            condicao = true;
            cout << "nao" << endl;
            break;

            inicio ++;
            fim ++;

        }else{
            condicao = false;
        }
        
    }

    if(condicao == false){
        cout << "sim" << endl;
    }

}