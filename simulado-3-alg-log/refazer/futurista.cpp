#include <bits/stdc++.h>
using namespace std;

int main(){

    string frase; 
    int numero;
    cin >> numero;
    cin.ignore();
    getline(cin, frase);

    for(int i = 0; i < numero; i++){

        cout << frase << endl;
    }

    return 0;

}