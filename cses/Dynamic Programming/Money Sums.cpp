#include <bits/stdc++.h>
using namespace std;
vector<int>v;
int dp[100100];
int main(){
    int xi,n;
    cin >> n;
    int sum = 0;
    for(int i = 1;i<=n;i++){
        cin >> xi;
        sum += xi;
        v.push_back(xi);
    }
    sort(v.begin(),v.end());
    for(int i = 0;i<=sum;i++){
        dp[i] = 1e9;    
    }
    dp[0] = -1;
    for(int i = 0;i<=sum;i++){
        // cout << ":" << i << endl;
        for(int j = dp[i]+1;j<n;j++){

            dp[i + v[j]] = min(dp[i+v[j]],j); 
        }
    }
    // for(int i = 0;i<=sum;i++){
    //     cout << dp[i] << " " << endl;
    // }
    int ans = 0;
    for(int i = 0;i<=sum;i++) if(dp[i]!=1e9 && dp[i] != -1) ans++;
    cout << ans << endl;
    for(int i = 0;i<=sum;i++){
        if(dp[i]!=1e9 && dp[i] != -1) cout << i << " ";
    }
    
}