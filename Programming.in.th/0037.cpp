#include <bits/stdc++.h>
using namespace std;


int main(){

    int n,m,l,k,c;
    cin >> n >> m >> l >> k >> c;
    int sum = 0,x;
    for(int i = 1; i<=n;i++){
        for(int j = 1;j<=m;j++){
            cin >> x;
            sum += x;
        }
    }
    sum += (k*l*c);

    cout << (sum+c-1)/c;

    


}