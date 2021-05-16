#include <bits/stdc++.h>
using namespace std;
int main(){
    long long ans = -2e9,sum = 0,xi;
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> xi;
        sum += xi;
        ans = max(ans,sum);
        if(sum < 0) sum = 0;

    }
    cout << ans;
}