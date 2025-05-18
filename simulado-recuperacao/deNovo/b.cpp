#include <bits/stdc++.h>
using namespace std;

int main(){

    char letra;
    cin >> letra;
    cin.ignore();
    string frase;
    getline(cin, frase);    

    int temp = 0;

    for(char c : frase){

        if(letra == tolower(c) || letra == toupper(c)){
            temp += 1;
        }
    }

    cout << temp << endl;


}