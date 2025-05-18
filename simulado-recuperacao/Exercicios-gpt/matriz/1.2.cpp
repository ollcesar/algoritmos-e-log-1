#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;
    double matriz[a][b];

    for(int i =0; i < a; i++){
        for(int j = 0; j < b; j++){
            cin >> matriz[i][j];
        }
    }

    for(int j =0; j < b; j++){
        for(int i = 0; i < a; i++){
            
            if(i < a-1){
                cout << matriz[i][j] << " ";
            }else{
                cout << matriz[i][j] << endl;
            }
        }
    }
}