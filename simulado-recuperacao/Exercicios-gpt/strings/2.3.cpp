#include <bits/stdc++.h>
using namespace std;

int main(){

    string frase;
    getline(cin, frase);

    int tamanho = frase.length()-1;
    int temp = 1;
    for(char c : frase){
        if(c == ' '){
            temp++;
        }
    }
    if(frase[tamanho] == ' '){
        temp = temp-1;
    }

    cout << temp << " palavras." << endl;

}