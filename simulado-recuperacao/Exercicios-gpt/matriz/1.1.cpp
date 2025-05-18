#include <bits/stdc++.h>
using namespace std;

int main(){

    int a;
    cin >> a;
    double matriz[a][a];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            cin >> matriz[i][j];
        }
    }
    double temp = 0.0;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            if(i == j){
                temp+=matriz[i][j];
            }
        }
    }
    
    cout << temp << endl;

        
    

}