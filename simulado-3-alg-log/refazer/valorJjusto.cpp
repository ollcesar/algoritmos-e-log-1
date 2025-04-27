#include <bits/stdc++.h>
using namespace std;

int main(){

    for(int i = 0; i < 100; i++){

        char numero;
        string frase;

        cin >> numero;
        cin.ignore();
        getline(cin, frase);
       
        string temp = "";


        for(char c : frase){
            if(c != numero){

                temp += c;
            }
        }

        bool condicao = true;

        for (char d : temp){
            if(d != '0'){
                condicao = false;
                break;
            }
        }

        if(condicao == true || temp == ""){
            cout << "0" << endl;
        }else{
            cout << temp << endl;
        }


    return 

    }
}