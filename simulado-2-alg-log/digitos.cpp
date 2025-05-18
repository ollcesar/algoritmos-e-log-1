#include <bits/stdc++.h>
using namespace std;
int main(){

    string frase;
    getline(cin, frase);

    int temp = 0;
    for(char d : frase){
        if(d >= '0' && d <= '9'){
            temp +=1;
        }
    }

    cout << temp << endl;
}