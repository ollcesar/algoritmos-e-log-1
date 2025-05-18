#include <bits/stdc++.h>
using namespace std;

int main(){

    string palavra;
    getline(cin, palavra);

    char letra, substituta;
    cin >> letra >> substituta;

    int i = 0;
    for(char c : palavra){
        if(c == letra){
            palavra[i] = substituta;
        }
        i++;
    }
    cout << palavra << endl;
}