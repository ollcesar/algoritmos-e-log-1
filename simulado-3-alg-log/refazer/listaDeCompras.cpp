#include <bits/stdc++.h>
using namespace std;

struct listaDeCompras{
    double preco;
    string mercado;
};

int main(){

    listaDeCompras lista[4];



    for(int i = 0; i < 4; i++){

        cin >> lista[i].preco;
        cin.ignore();
        getline(cin, lista[i].mercado);

    }

    double menorValor = lista[0].preco;
    int valorMercado = 0;
    for(int i = 1; i < 4; i++){

        if (menorValor > lista[i].preco){
            menorValor = lista[i].preco;
            valorMercado = i;
        }
    }

    printf("%.2lf ", menorValor);
    cout << lista[valorMercado].mercado << endl;

}