#include <bits/stdc++.h>
using namespace std;

int main(){

    int matriz[5][5];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> matriz[i][j];
        }
    }

    int x;
    cin >> x;

    int temp = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            if(x == matriz[i][j]){
                cout << "coordenadas: ["<< i+1 << "]["<< j+1 << "]" << endl;
                temp++;
            }
        }
    }
    if(temp ==0){
        cout << "coordenadas: [-1][-1]" << endl;
    }
}