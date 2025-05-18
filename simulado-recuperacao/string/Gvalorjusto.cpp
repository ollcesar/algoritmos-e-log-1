#include <bits/stdc++.h>
using namespace std;

int main(){
    char numero;
    string valor;
    while(cin >> numero >> valor){

        string temp = "";
        for(char c : valor){
            
            if(c != numero){
                temp += c;
            }
        }

        bool condicao = true;
        for(char d : temp){
            if(d != '0'){
                condicao = false;
                break;
            }
        }

        if(condicao == true || temp == ""){
            cout << 0 << endl;
        }else{
            cout << temp << endl;
        }
    } 
}