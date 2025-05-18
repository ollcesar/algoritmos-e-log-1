#include <bits/stdc++.h>
using namespace std;

struct cadastro{
    string nome;
    double matricula;
    double mediaFinal;

};
int main(){
    int a;
    cin >> a;
    cadastro aluno[a];

    for(int i = 0; i < a; i++){

        cin.ignore();
        getline(cin, aluno[i].nome);
        cin >> aluno[i].matricula;
        cin >> aluno[i].mediaFinal;
    }

    for(int i = 0; i < a; i++){

        cout << aluno[i].nome << endl;
        printf("%.0lf\n", aluno[i].matricula);
        printf("%.2lf\n", aluno[i].mediaFinal);
    }
}