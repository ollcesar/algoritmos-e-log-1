#include <bits/stdc++.h>
using namespace std;

struct conjunto{
    string frase;

};

int main(){

    conjunto frases[100];

    for(int i = 0; i < 100; i++){

        getline(cin, frases[i].frase);

        string temp = "";
        for(char c : frases[i].frase){

            if((c >= 'a'  && c <= 'z') || (c >= 'A'  && c <= 'Z')){
                temp+=tolower(c);
            }
        }

        int inicio = 0;
        int fim = temp.length()-1;

        bool condicao = false;
        
        for(int j = 0; j < temp.length(); j++){

            if(temp[inicio] != temp[fim]){
                condicao = true;
                break;
            }else{
                condicao = false;
            }

            inicio++;
            fim--;

        }

        if(condicao == false){
            cout << "sim" << endl;
        }else{
            cout << "nao" << endl;
        }
    }
}