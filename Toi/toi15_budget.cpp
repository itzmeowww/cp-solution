#include <bits/stdc++.h>
using namespace std;
int pa[3030];
int fp(int x){
    if(pa[x] == x) return x;
    return pa[x] = fp(pa[x]);
}
struct DATA{
    int s,t,b;
};
vector<DATA>v;
vector<pair<int,int>>pri;

struct DATA2{
    int s,t;
    long long w;
    bool operator < (const DATA2 & d2) const {
        return w > d2.w;
    }
};
priority_queue<DATA2>pq;
int main(){
    int build = 0;
    int n,m;
    scanf(" %d %d",&n,&m);
    for(int i = 0;i < n;i++){
        pa[i] = i;
    }
    int s,t,l,r;
    for(int i = 1;i<=m;i++){
        scanf(" %d %d %d %d",&s,&t,&l,&r);
        if(r == 0){
            v.push_back({s,t,l});
        }
        else{
            pa[fp(s)] = fp(t);
            build++;
        }
    }

    int p,c,d;
    scanf(" %d",&p);
    for(int i = 1;i<=p;i++){
        scanf(" %d %d",&c,&d);
        pri.push_back({d,-c});
    }

    if(build == n-1){
        printf("0");
        return 0;
    }
    
    sort(pri.begin(),pri.end());
    for(auto vv : v){
        int idx = 0;
        while(1){
            if(-pri[idx].second >= vv.b){
                break;
            }
            idx++;
        }
        // cout << vv.b << " = " << pri[idx].first << endl;
        pq.push({vv.s,vv.t,pri[idx].first});
    }
    long long ans = 0;
    while(!pq.empty()){
        s = pq.top().s;
        t = pq.top().t;
        long long w = pq.top().w;
        pq.pop();
        if(fp(s) == fp(t)) continue;
        // cout << "use " << s << " " << t << " = " << w <<endl;
        pa[fp(s)] = fp(t);
        ans += w;
    }
    printf("%lld",ans);
}