#include <bits/stdc++.h>
using namespace std;

struct cadastro{

    string nome;
    double media;
};
int main(){

    int a;
    cin >> a;
    cadastro aluno[a];

    for(int i = 0; i < a; i++){

        cin.ignore();
        getline(cin, aluno[i].nome);
        cin >> aluno[i].media;

    }
    
    for(int i = 0; i < a; i++){

        if(aluno[i].media >= 7.0){
            cout << aluno[i].nome << endl;
            printf("%.2lf\n", aluno[i].media);
        }

    }
    
}