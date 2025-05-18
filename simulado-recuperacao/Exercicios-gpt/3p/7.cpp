#include <bits/stdc++.h>
using namespace std;

struct dados{

    double densidade;
    double populacao;
    string cidade;

};
int main(){

    int a; cin >> a;

    dados dados[a];

    cin.ignore();

    for(int i = 0; i <a; i++){

        cin >> dados[i].densidade;
        cin >> dados[i].populacao;
        cin.ignore();

        getline(cin, dados[i].cidade);
    }

    double temp = dados[0].densidade/dados[0].populacao;
    int numero = 0;

    for(int i = 1; i < a; i++){

        if(temp <( dados[i].densidade/dados[i].populacao)){
            temp = dados[i].densidade / dados[i].populacao;
            numero = i;
        }
    }

    cout << dados[numero].populacao << " ";
    cout << dados[numero].cidade << endl;

}