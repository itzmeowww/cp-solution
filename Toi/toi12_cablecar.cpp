#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>g[2525];

struct DATA{
    int x;
    int w;
};
int dp[2525];
queue<DATA>q;

int main(){
    int n,m;
    int a,b;
    int w;
    scanf(" %d %d",&n,&m);
    
    for(int i = 1;i <= m;i++){
        scanf(" %d %d %d",&a,&b,&w);
        g[a].push_back({b,w});
        g[b].push_back({a,w});
    }
    int s,d,p;
    scanf(" %d %d %d",&s,&d,&p);
    q.push({s,(int)1e9});
    dp[s] = 1e9;
    while(!q.empty()){
        int x = q.front().x;
        w = q.front().w;
        q.pop();
        if(dp[x] > w) continue;
        for(auto xx : g[x]){
            int to = xx.first;
            int ww = xx.second;
            int minn = min(ww,w);
            if(minn > dp[to]){
                dp[to] = minn;
                q.push({to,dp[to]});
            }
        }
    }
    dp[d]--;
    
    
    printf("%d",(p+dp[d]-1)/dp[d]);

   


}