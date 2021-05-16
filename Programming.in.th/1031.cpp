#include <bits/stdc++.h>
using namespace std;
int dp[101000];
vector<pair<int,int>>v;
int main(){
    int k,n,m,a,b;
    cin >> k >> n >> m;
    for(int i = 1;i<=n;i++) dp[i] = 1e9;
    
    for(int i = 1;i<=m;i++){
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    dp[1] = 0;
    for(auto vv : v){
        
        int s = vv.first;
        int e = vv.second;
        // cout << s << " " << e << endl;
        dp[e] = min(dp[s]+1,dp[e]); 
    }
    // for(int i = 1;i<=n;i++){
    //     cout << dp[i] << " ";
    // }
    // cout << endl;
    for(int i = n;i>=1;i--){
        if(dp[i] <= k){
            cout << i;
            return 0;
        }
    }
}