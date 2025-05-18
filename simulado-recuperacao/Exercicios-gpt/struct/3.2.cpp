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
    double temp = aluno[0].media;
    int temp2 = 0;

    for(int i = 1; i < a; i++){

        if(aluno[i].media < temp){
            temp = aluno[i].media;
            temp2 = i;
        }

    }
    
    cout << aluno[temp2].nome << endl;
    printf("%.2lf\n", temp);
}