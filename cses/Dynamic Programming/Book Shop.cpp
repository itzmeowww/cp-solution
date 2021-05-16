#include <bits/stdc++.h>
using namespace std;
int h[1005],s[1005];
int dp[1005][100005];
int main(){
    int n,x;
    cin >> n >> x;
    for(int i = 1;i<=n;i++){
        cin >> h[i];
    }
    for(int i = 1;i<=n;i++){
        cin >> s[i];
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1; j <= x;j++){
            if(j >= h[i]){
                dp[i][j] = max(dp[i-1][j-h[i]] + s[i],dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<= x;j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << dp[n][x];


}