#include <bits/stdc++.h>
using namespace std;

struct dados{

    string universidade;
    string curso;
    string campus;
    int vagas;

};

int main(){

    int a;
    cin >> a;
    cin.ignore();
    dados dados[a];

    for(int i = 0; i < a; i++){

        getline(cin,dados[i].universidade);
        getline(cin,dados[i].curso);
        getline(cin,dados[i].campus);
        cin >> dados[i].vagas;
        cin.ignore();
    }

    int b;
    cin >> b;

    for(int i = 0; i < a; i++){

        if(dados[i].vagas >= b){
            cout << dados[i].universidade << endl;
            cout << dados[i].curso<< endl;
            cout << dados[i].campus<< endl;
            cout << dados[i].vagas<< endl;
        }
        
    }
}