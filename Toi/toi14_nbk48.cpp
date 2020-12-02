#include <bits/stdc++.h>
using namespace std;
long long qs[100100];
long long price[100100];
int main(){
    int n,q,x;
    cin >> n >> q;
    for(int i = 1;i<=n;i++){
        
        cin >> x;
        qs[i] = x;
        qs[i] += qs[i-1];
    }
    for(int i = 0;i<=n+1;i++) price[i] = 2e18;
    for(int i = n;i>=1;i--){
        price[i] = min(qs[i],price[i+1]);
    }
    while(q--){
       cin >> x;
       int idx = upper_bound(&price[1],&price[n],x) - &price[0];
       while(price[idx] > x && idx > 0) idx--;

       cout << idx << endl;

    }
}