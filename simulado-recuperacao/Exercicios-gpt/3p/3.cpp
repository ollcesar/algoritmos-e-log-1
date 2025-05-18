#include <bits/stdc++.h>
using namespace std;

int main(){

    string a, b, a1, b1;

    cin >> a >> b;

    a1=a; b1=b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    if(a == a1 && b == b1){
        cout << "sim\n";
    }else{
        cout << "nao\n";
    }

}