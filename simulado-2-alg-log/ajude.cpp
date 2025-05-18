#include <bits/stdc++.h>
using namespace std;

int main(){

    int a;
    cin >> a;
    
    int matriz[a][a];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){

            if(i == j){
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = 0;
            }
        }
    }

    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){

            if(j < a-1){
                cout << matriz[i][j] << " ";

            }else{
                cout << matriz[i][j] << endl;
            }
        }
    }


    return 0;

}