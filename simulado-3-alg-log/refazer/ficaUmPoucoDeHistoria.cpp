#include <bits/stdc++.h>
using namespace std;

int main(){

    int a; 
    cin >> a;

    for(int i = 0; i < a; i++){

        int numero;
        cin >> numero;

        cin.ignore();
        string frase;
        getline(cin, frase);

        string temp = "";
        for(char &c : frase){

            if(c >= 'A' && c <= 'Z'){
                c = ((c - 'A' + numero + 26)%26)+ 'A';     
            }
        }

        cout << frase << endl;

    }

    return 0;
}