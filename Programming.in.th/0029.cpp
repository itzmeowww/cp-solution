#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    if(y < x){
        cout << 2;
    }
    else cout << (y+x-1)/x;

}