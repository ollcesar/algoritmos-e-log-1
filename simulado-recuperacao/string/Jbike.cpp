#include <bits/stdc++.h>
using namespace std;

struct Bike{

    string cor;
    string marca;
    int marcha;
    double preco;
};

int main(){


    int vezes, marchaMinima, marchaMaxima;
    cin >> vezes >> marchaMinima >> marchaMaxima;
    Bike bike[vezes];

    for(int i = 0; i < vezes; i++){

        cin.ignore();
        getline(cin, bike[i].cor);
        getline(cin, bike[i].marca);
        cin >> bike[i].marcha;
        cin >> bike[i].preco; 
    }
    for(int i = 0; i < vezes; i++){
        if(bike[i].marcha >= marchaMinima && bike[i].marcha <= marchaMaxima){

            cout << bike[i].cor << endl;
            cout << bike[i].marca << endl;
            cout << bike[i].marcha << endl;
            printf("%.2lf\n", bike[i].preco);
        }
    }
}