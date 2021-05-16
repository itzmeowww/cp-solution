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
    
    dp[0] = 1;
    for(auto j : v)
    for(int i = 0;i<=x;i++){
        
            if(i+j <= x){
                dp[i+j] += dp[i]%MOD;
                dp[i+j]%=MOD;
            }
        
    }
    // for(int i = 0;i <= x;i++){
    //     cout << i << " " << dp[i] << endl;
    // }
    cout << dp[x];
}