#include <bits/stdc++.h>
using namespace std;
int dp[1001000];
int main(){
    int n;
    cin >> n;
    
    for(int i = 0;i<=n;i++){
        dp[i] = 1e9;
    }
    dp[n] = 0;
    for(int i = n;i>=0;i--){
        int num = i;
        // cout << i << " = " << dp[i] << endl;
        if(dp[i] == 1e9) continue;
        while(num){
            // cout << "::" << num << endl;
            if(i-num%10 >= 0) dp[i - num%10] = min(dp[i] + 1,dp[i - num%10]);
            
            num/=10;
        }
    }
    // for(int i = 0;i<=n;i++){
    //     cout << i << " " << dp[i] << endl;
    // }
    cout << dp[0];

}