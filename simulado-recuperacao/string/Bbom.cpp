#include <bits/stdc++.h>
using namespace std;
int main(){

    string frase;
    char letra;


    cin >> letra;

    cin.ignore();
    getline(cin, frase);
    int temp = 0;


    for(char c : frase){

        if(c == toupper(letra) || c == tolower(letra)){
            temp+=1;
        }
    }

    cout << temp << endl;


}