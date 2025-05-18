#include <bits/stdc++.h>
using namespace std;

int main(){

    int a;
    cin >> a;
    cin.ignore();



    for(int i = 0; i < a; i++){

        int b;
        cin >> b;
        cin.ignore();
        string frase;
        getline(cin, frase);

        string temp = "";
        for(char c : frase){
            
            if(c >= 'A' && c <= 'Z'){

                temp+= char((c-'A' + b + 26)%26 + 'A');
            }else{
                temp += c;
            }

        }

        cout << temp << endl;
    }
}