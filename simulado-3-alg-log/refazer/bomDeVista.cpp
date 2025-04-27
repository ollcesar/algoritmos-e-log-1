#include <bits/stdc++.h>
using namespace std;

int main(){
    string frase;
    char letra;
    cin >> letra;
    cin.ignore();
    getline(cin, frase);


    int tamanho = frase.length();

    int temp = 0;

    for(int i = 0; i < tamanho; i++){

        if(toupper(frase[i]) == letra || tolower(frase[i]) == letra){
            temp += 1;
        }
    }

    cout << temp << endl;

    return 0;

}