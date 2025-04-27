#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    string V;

    while(cin >> N >> V){

        char Numero = N + '0';

        string semNumero = "";

        for(char c : V){

            if(c != Numero){
                semNumero += c;

            }
        }

        int zero = 0;
        while(zero < semNumero.size() && semNumero[zero] == '0'){
            zero++;
        }

        semNumero = semNumero.substr(zero);

        if(semNumero.empty()){
            cout << 0 << endl;
        }else{
            cout << semNumero << endl;
        }

    }



}