#include <bits/stdc++.h>
using namespace std;

int main(){

    int numero;
    cin >> numero;

    for(int i = 0; i < numero; i++){

        int numeroC;
        cin >> numeroC;

        string str;
        cin >> str; 

        string decifrado = "";

        for(char c : str){

            if (c >= 'a' && c <= 'z') {
                // Cifrar mantendo o limite de 'a' a 'z'
                c = (c - 'a' + numeroC + 26) % 26 + 'a';
            } else if (c >= 'A' && c <= 'Z') {
                // Cifrar mantendo o limite de 'A' a 'Z'
                c = (c - 'A' + numeroC + 26) % 26 + 'A';
            }

            decifrado += c;

        }

        cout << decifrado << endl;
    }
}