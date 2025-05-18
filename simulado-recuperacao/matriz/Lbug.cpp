#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int matriz[a][b];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){

            if(j < a-1){
                cout << matriz[j][i] << " ";

            }else{
                cout << matriz[j][i] << endl;
 
            }
        }
    }
}