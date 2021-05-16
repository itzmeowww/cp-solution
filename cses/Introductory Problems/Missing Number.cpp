#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long x,n,sum = 0;
    cin >> n;
    for(int i = 1;i<=n-1;i++){
        cin >> x;
        sum+=x;
    }
    cout << n*(n+1)/2-sum;
}