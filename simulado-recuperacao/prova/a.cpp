#include <bits/stdc++.h>
using namespace std;

int main(){

    string palavra;
    while(getline(cin, palavra)){


        int inicio = 0;
        int fim = palavra.length()-1;

        bool condicao = true;
        while(inicio <= fim){
            if(palavra[inicio] != palavra[fim]){
                condicao = false;
                break;

            }
            inicio++;
            fim--;
        } 

        if(!condicao){
            cout << "nao" << endl;
        }else{
            cout << "sim" << endl;
        }
        
    }
}