#include <bits/stdc++.h>
using namespace std;

int main(){

    string palavra;
    getline(cin, palavra);

    string temp = "";
    for(char c : palavra){
        
        temp += tolower(c);
    }

    int a = 0;
    for(char d : temp){

        if( d == 'a' || d == 'e' || d == 'i' || d == 'o' || d == 'u'){

            a++;
        }
    }
    cout << a << endl;

}