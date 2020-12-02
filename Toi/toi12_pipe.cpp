#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v;
int dis[15150];
int vis[15150];
int main(){
    int n,k;
    scanf(" %d %d",&n,&k);
    int x,y;
    for(int i = 0;i<n;i++){
        scanf(" %d %d",&x,&y);
        v.push_back({x,y});
        dis[i] = 2e9;
    }
    long long ans = 0;

    int now = 0;
    while(1){
        int idx = -1;
        vis[now] = 1;
        int noi = 2e9;
        for(int i = 0;i<n;i++){
            if(vis[i]) continue;
            int wow = abs(v[i].first - v[now].first) + abs(v[i].second - v[now].second);
            dis[i] = min(dis[i],wow);
            if(dis[i] < noi){
                noi = dis[i];
                idx = i;
            }
        }
        if(idx == -1) break;
        now = idx;
    }

    sort(dis,dis+n);
    for(int i = 0;i<n-k;i++) ans += dis[i];
    printf("%lld",ans);


    
}