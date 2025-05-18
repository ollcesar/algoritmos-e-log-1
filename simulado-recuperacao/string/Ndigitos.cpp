#include <bits/stdc++.h>
using namespace std;

int main(){

    string frase;
    getline(cin, frase);

    int temp = 0;
    for(char c : frase){

        if(c >='0' && c <= '9'){
            temp+=1;
        }

    }

    cout << temp << endl;
}