#include <bits/stdc++.h>
using namespace std;

struct Frases{
    string frase;
};
int main(){

    Frases texto[100];

    for(int i = 0; i < 100; i++){

        getline(cin, texto[i].frase);

        string temp = "";

        for(char c : texto[i].frase){

            if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){
                temp += c;
            }
        }

        string temp2 = "";
        for(char c : temp){
            c = tolower(c);

            temp2 += c;
        }

        int inicio = 0;
        int fim = temp2.length() - 1;

        bool condicao = false;

        for(int i = 0; i < temp2.length(); i++){

            if(temp2[inicio] != temp2[fim]){
                condicao = true;
                cout << "nao" << endl;
                break;
            }else{
                condicao = false;
            }

            inicio++;
            fim--;
            
        }

        if(condicao == false){
            cout << "sim" << endl;
        }

    }

}