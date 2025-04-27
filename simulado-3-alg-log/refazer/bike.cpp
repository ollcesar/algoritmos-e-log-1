#include <bits/stdc++.h>
using namespace std;

struct bike{
    string cor;
    string marca;
    int marcha;
    double preco;
};

int main(){


    int numero;
    cin >> numero; 

    bike bicicleta[numero];

    int marchaMinima, marchaMaxima;
    cin >> marchaMinima >> marchaMaxima;


    for(int i = 0; i < numero; i++){

        cin.ignore();
        getline(cin, bicicleta[i].cor);
        getline(cin, bicicleta[i].marca);
        cin >> bicicleta[i].marcha;
        cin >> bicicleta[i].preco;

    }

    for(int i = 0; i < numero; i++){

        if(bicicleta[i].marcha >= marchaMinima && bicicleta[i].marcha <= marchaMaxima){

            cout << bicicleta[i].cor << endl;
            cout << bicicleta[i].marca << endl;
            cout << bicicleta[i].marcha << endl;
            printf("%.2lf\n", bicicleta[i].preco);

        }
    }
}