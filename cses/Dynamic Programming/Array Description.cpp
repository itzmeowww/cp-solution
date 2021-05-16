#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007;
int dp[105][100100];

int main(){
    int n,m,xi;
    cin >> n >> m;
    cin >> xi;
    
    if(xi == 0){
        for(int i = 1;i<=m;i++) dp[i][1] = 1;
    }                
    else{
        dp[xi][1] = 1;
    }
    
    for(int i = 2;i<=n;i++){
        cin >> xi;
        

        if(xi == 0){
            for(int j = 1;j<=m;j++){
                if(j >= 1  && j <= m) dp[j][i] = (dp[j][i] + dp[j][i-1])%MOD;
                if(j+1 >= 1  && j+1 <= m) dp[j][i] = (dp[j][i] + dp[j+1][i-1])%MOD;
                if(j-1 >= 1  && j-1 <= m) dp[j][i] = (dp[j][i] + dp[j-1][i-1])%MOD;
            }
        }
        else{
            if(xi >= 1  && xi <= m) dp[xi][i] = (dp[xi][i] + dp[xi][i-1])%MOD;
            if(xi+1 >= 1  && xi+1 <= m) dp[xi][i] = (dp[xi][i] + dp[xi+1][i-1])%MOD;
            if(xi-1 >= 1  && xi-1 <= m) dp[xi][i] = (dp[xi][i] + dp[xi-1][i-1])%MOD;
        }
    }
    int ans = 0;

    // for(int i = 1;i<=m;i++){
    //     for(int j = 1;j<=n;j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    if(xi == 0)
    for(int i = 1;i<=m;i++){
        ans = (ans+dp[i][n])%MOD;
    }
    else ans = dp[xi][n];
    cout << ans;

}