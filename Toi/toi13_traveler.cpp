#include <bits/stdc++.h>
using namespace std;
vector<pair<int,long long>>g[10100];
long long dp[3][10100];
struct DATA{
    int u;
    long long w;
};
queue<DATA>q;

void solve(int t,int s){
    q.push({s,0});
    dp[t][s] = 0;
    while(!q.empty()){
        int u = q.front().u;
        long long w = q.front().w;
        q.pop();
        for(auto x : g[u]){
            int to = x.first;
            long long nw = w + x.second;

            if(nw < dp[t][to]){
                dp[t][to] = nw;
                q.push({to,nw});
            }
        }
    }
}

int main(){
    int n,m;
    scanf(" %d %d",&n,&m);
    for(int i = 0;i<n;i++){
        dp[0][i] = 1e18;
        dp[1][i] = 1e18;
    }
    int u,v;
    long long w,z;
    int s,e;
    scanf(" %d %d %lld",&s,&e,&z);
    for(int i = 1;i<=m;i++){
        scanf(" %d %d %lld",&u,&v,&w);
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    solve(0,s);
    solve(1,e);
    long long minn = 1e18;
    int idx = 0;
    for(int i = 0;i<n;i++){
        if(dp[0][i] <= z){
            if(dp[1][i] < minn){
                minn = dp[1][i];
                idx = i;
            }
        }
    }
    printf("%d %lld %lld",idx,dp[0][idx],dp[1][idx]);


}