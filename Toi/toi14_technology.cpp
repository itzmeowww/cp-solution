#include <bits/stdc++.h>
using namespace std;
vector<int>g[100100];
int vis[100100];
queue<int>q[100100];

long long dfs(int x){
    // cout <<  ": " << x << endl;    
    long long ret = 1;
    if(vis[x] == 1) return 1e9;
    if(vis[x] == 2) return 0;

    vis[x] = 1;
    for(auto xx : g[x]){
        ret += dfs(xx);
    }
    vis[x] = 2;
    return ret;   
}
int main(){
    int n,k;
    long long t;
    scanf(" %d %d %lld",&n,&k,&t);
    int l,p;
    int x;
    for(int i = 1;i<=n;i++){
        scanf(" %d %d",&l,&p);
        for(int j = 1;j<=p;j++){
            scanf(" %d",&x);
            g[i].push_back(x);
        }
        q[l].push(i);
    }    
    int now = 1;
    int ans = -1;
    while(now <= k){
        // cout << "now : " << now << endl;
        while(!q[now].empty()){
            int f = q[now].front();
            q[now].pop();
            t -= dfs(f);
        }
        if(t >= 0) ans = now;
        else break;
        now++;
    }
    printf("%d",ans);


}