#include <bits/stdc++.h>
using namespace std;

int main(){

    int numero;
    char frase[1001];

    cin >> numero;
    cin.ignore();
    cin.getline(frase, 1001);

    for(int i = 0; i < numero; i++){

        cout << frase << endl;
    }


}