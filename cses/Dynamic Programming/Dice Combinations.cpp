#include <bits/stdc++.h>
using namespace std;
long long dp[1001000];
#define MOD 1000000007;
int main(){
    int n;
    cin >> n;
    dp[0] = 1;
    for(int i = 0;i<=n;i++){
        for(int j = 1;j<=6;j++){
            dp[i+j] += dp[i]%MOD;
            dp[i+j]%=MOD;
        }
    }
    cout << dp[n];
}