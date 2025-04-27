#include <bits/stdc++.h>
using namespace std;

struct bike{
    char C[51], F[51];
    int Q;
    double P;
};

int main(){

    int N, A, B;
    cin >> N >> A >> B;

    bike lista[100];

    for(int i = 0; i < N; i++){

        cin.ignore();
        cin.getline(lista[i].C, 51);
        cin.getline(lista[i].F, 51);
        cin >> lista[i].Q;
        cin >> lista[i].P;
    
    }

    for(int i = 0; i < N; i++){

        if(lista[i].Q >= A && lista[i].Q <= B){

            cout << lista[i].C << endl;
            cout << lista[i].F << endl;
            cout << lista[i].Q << endl;
            printf("%.2lf\n", lista[i].P);
        }
    }

    return 0;
}