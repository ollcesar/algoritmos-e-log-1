#include <bits/stdc++.h>
using namespace std;

int main(){

    string palavra;
    cin >> palavra;

    int inicio = 0;
    int fim = (palavra.length())-1;

    bool condicao = false;

    while(inicio <= fim){

        if(palavra[inicio] != palavra[fim]){
            condicao = true;
            break;


        }
        inicio++;
        fim--;
    }

    if(condicao == false){
        cout << "sim" << endl;

    }else{
        cout << "nao" << endl;;
    }
}