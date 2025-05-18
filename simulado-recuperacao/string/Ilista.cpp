#include <bits/stdc++.h>
using namespace std;

struct lista{
    
    double preco;
    string mercado;
};
int main(){

    lista itens[4];

    for(int i = 0; i < 4; i++){


        cin >> itens[i].preco;
        cin.ignore();
        getline(cin, itens[i].mercado);

    }

    double temp = itens[0].preco;
    int temp2 = 0;
    for(int i = 1; i < 4; i++){
        if(itens[i].preco < temp){
            temp = itens[i].preco;
            temp2 = i;
        }
    }

    printf("%.2lf ", temp);
    cout <<  itens[temp2].mercado << endl;


}