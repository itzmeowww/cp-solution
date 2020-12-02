#include <bits/stdc++.h>
using namespace std;
int p[105];
vector<pair<int,int>>g[105];
long long dp[3][105][105];
int vis[3][105][105];
struct DATA{
    int x;
    int use;
    int f;
    long long cost;
    bool operator < (const DATA & d2) const {
        return cost > d2.cost;
    }
};
priority_queue<DATA>q;
int main(){
    int n;
    scanf(" %d",&n);
    for(int i = 1;i<=n;i++){
        scanf(" %d",&p[i]);
    }
    int s,d,f;
    scanf(" %d %d %d",&s,&d,&f);
    if(s == d){
        printf("0");
        return 0;
    }
    for(int i = 0;i<=f;i++){
        for(int j = 0;j<=n;j++){
            dp[0][i][j] = 1e18;
            dp[1][i][j] = 1e18;
        }
    }
    int m;
    scanf(" %d",&m);
    int a,b,w;
    for(int i = 1;i<=m;i++){
        scanf(" %d %d %d",&a,&b,&w);
        g[a].push_back({b,w});
        g[b].push_back({a,w});
    }
    q.push({s,0,0,0});
    dp[0][0][s] = 0;
    while(!q.empty()){
        int x = q.top().x;
        int use = q.top().use;
        int fu = q.top().f;
        long long cost = q.top().cost;
        // cout << cost << endl;
        q.pop();
        if(vis[use][fu][x] == 1) continue;
        vis[use][fu][x] = 1;
        for(int i = fu;i<=f;i++){
            dp[use][i][x] = min(dp[use][i][x],cost + p[x]*(i-fu));
            if(use == 0){
                dp[1][i][x] = min(dp[1][i][x],cost);
            }
        }
        

        for(auto xx : g[x]){
            int to = xx.first;
            w = xx.second;
            for(int i = w;i<=f;i++){
                if(dp[use][i][x] < dp[use][i-w][to] && vis[use][i-w][to] == 0){
                    dp[use][i-w][to] = dp[use][i][x];
                    q.push({to,use,i-w,dp[use][i][x]});
                }
                if(dp[1][i][x] < dp[1][i-w][to] && vis[1][i-w][to] == 0){
                    dp[1][i-w][to] = dp[1][i][x];
                    q.push({to,1,i-w,dp[1][i][x]});
                }
            }
           
        }
    }
    // for(int i = 1;i<=n;i++){
    //     cout << dp[0][f][i] << " ";
    // }
    // cout << endl;
    // for(int i = 1;i<=n;i++){
    //     cout << dp[1][f][i] << " ";
    // }
    // cout << endl;
    printf("%lld",min(dp[0][f][d],dp[1][f][d]));
}