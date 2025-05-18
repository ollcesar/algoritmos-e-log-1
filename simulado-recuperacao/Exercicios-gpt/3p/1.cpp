#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string palavras;

    bool a = true;

    while(cin >> palavras){

        reverse(palavras.begin(), palavras.end());
        if(a == false){
            cout  << " ";
            
        }
        cout << palavras;
        a = false;
    }
    
    cout << endl;


}