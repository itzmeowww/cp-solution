#include <bits/stdc++.h>
using namespace std;
int main(){


    int bx,x;
    int n;
    long long ans = 0;
    cin >> n;
    cin >> bx;
    for(int i = 2;i<=n;i++){
        cin >> x;
        if(x < bx){
            ans +=  bx-x;
        }
        else{
            bx = x;
        }
    }
    cout << ans;
}