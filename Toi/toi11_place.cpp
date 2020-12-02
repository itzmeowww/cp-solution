#include <bits/stdc++.h>
using namespace std;
int pa[200200];
int fp(int x){
    if(pa[x] == x) return x;
    return pa[x] = fp(pa[x]);
}
struct DATA{
    int u,v,w;
    bool operator < (const DATA & d2) const {
        return w < d2.w;
    }
};
priority_queue<DATA>pq;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i = 1;i <= n;i++) pa[i] = i;
    int u,v,w;
    for(int i = 1;i <= m;i++){
        cin >> u >> v >> w;
        pq.push({u,v,w-1});
    }
    long long ans = 0;
    while(!pq.empty()){
        int u = pq.top().u;
        int v = pq.top().v;
        int w = pq.top().w;
        pq.pop();
        if(fp(u) == fp(v)) continue;
        pa[fp(u)] = fp(v);

        ans += w;
    }

    cout << ans;
    
}