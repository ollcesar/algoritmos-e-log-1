#include <bits/stdc++.h>
using namespace std;

int main(){

    string frase;
    getline(cin, frase);
    
    string temp = "";

    for(char c : frase){
        if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' ){
            temp+=tolower(c);
        }
    }

    int inicio = 0;
    int fim = temp.length()-1;

    bool condicao = true;

    while(inicio < fim){

        if(temp[inicio] != temp[fim]){
            condicao = false;
            break;
        }   
        inicio++;
        fim--;
    }
    if(!condicao){
        cout << "nao" << endl;

    }else{
        cout << "sim" << endl;
    }


}