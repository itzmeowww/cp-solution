#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007;
char g[1005][1005];
int dp[1005][1005];
int main(){
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cin >> g[i][j];
        }
    }

    if(g[1][1] != '*') dp[1][1] = 1;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            if(i == 1 && j==1) continue;
            if(g[i][j] == '*') continue;
            dp[i][j] = (dp[i-1][j] + dp[i][j-1])%MOD;
        }
    }

    cout << dp[n][n];


}