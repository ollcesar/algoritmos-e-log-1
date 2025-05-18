#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

    int i = 0;
    string frase;
    while(getline(cin, frase)){

        string temp = "";
        for(char c : frase){
            if(isalpha(c)){
                temp+= tolower(c);
            }
        }

        bool cond = false;
        int inicio = 0, fim = temp.length()-1;
        while(inicio <= fim){

            if(temp[inicio]!=temp[fim]){
                cond = true;
                break;
            }

            inicio++;
            fim--;
        }

        if(cond == false){
            cout << "sim" << endl;
        }else{
            cout << "nao" << endl;
        }

        i++;
    }
}