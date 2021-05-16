#include <bits/stdc++.h>
using namespace std;
long long dp[1001000];
#define MOD 1000000007;
vector<int>v;
int main(){
    int xi,n,x;
    cin >> n >> x;
    for(int i = 1;i <= n;i++){
        cin >> xi;
        v.push_back(xi);
    }
    for(int i = 0;i<=x;i++) dp[i] = 1e9;
    dp[0] = 0;
    for(int i = 0;i<=x;i++){
        for(auto j : v){
            if(i+j <= x) dp[i+j] = min(dp[i]+1,dp[i+j]);
        }
    }
    // for(int i = 0;i <= x;i++){
    //     cout << i << " " << dp[i] << endl;
    // }
    cout << ((dp[x] == 1e9) ? -1 : dp[x]);
}