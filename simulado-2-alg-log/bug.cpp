#include <bits/stdc++.h>
using namespace std;

int main(){

    int linha, coluna;
    cin >> linha >> coluna;

    int matriz[linha][coluna];

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            
            cin >> matriz[i][j];

        }
    }

    for(int i = 0; i < coluna; i++){
        for(int j = 0; j < linha; j++){

            if(j < linha-1){
                cout << matriz[j][i] << " ";
            }else{
                cout << matriz[j][i] << endl;
            }
        }
    }



    return 0;
}