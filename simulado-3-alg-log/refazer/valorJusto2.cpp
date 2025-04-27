#include <bits/stdc++.h>
using namespace std;

int main(){

    char numero;
    string valor;

    cin >> numero;
    cin.ignore();
    getline(cin, valor);

    string temp = "";
    for(char c : valor){
        if(c != numero){
            temp+= c;
        }
    }


    bool condicao = false;
    for(char d : temp){
        if(d != '0'){
            condicao = true;
            break;
        }
    }

    if(condicao == false || temp == ""){
        cout << "0" << endl;
    }else{
        cout << temp << endl;
    }
}