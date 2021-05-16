#include <bits/stdc++.h>
using namespace std;
vector<int>g[100100];
int from[100100];
struct DATA{
    int x,cou;
    bool operator < (const DATA & d2) const {
        return cou > d2.cou; 
    }
};
priority_queue<DATA>pq;
vector<int>ans;

int main(){
    int n,m,a,b;
    int can = 0;
    cin >> n >> m;
    for(int i = 1;i<=m;i++){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    pq.push({1,0});
    while(!pq.empty()){
        DATA top = pq.top();
        
        pq.pop();
        for(auto to : g[top.x]){
            if(from[to] == 0){
                from[to] = top.x;
                if(to == n){
                    can = 1;
                    break;
                }

                pq.push({to,top.cou+1});
            }
        }
        if(can == 1) break;
    }
    if(can == 0){
        cout << "IMPOSSIBLE";
        return 0;
    }
    int ii = n;
    while(1){
        ans.push_back(ii);
        if(ii == 1){
            break;
        }
        ii = from[ii];
    }
    reverse(ans.begin(),ans.end());
    cout << ans.size() << endl;
    for(auto x : ans) cout << x << " "; 


}