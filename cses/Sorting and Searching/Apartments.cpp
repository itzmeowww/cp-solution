#include <bits/stdc++.h>
using namespace std;
struct DATA{
    int h;
    bool operator < (const DATA & d2) const {
        return h < d2.h;
    }
};

struct DATA2{
    int x;
    bool operator < (const DATA2 & d2) const {
        return x < d2.x;
    }
};
priority_queue<DATA>pq;
priority_queue<DATA2>pq2;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x,n,m,k;
    cin >> n >> m >> k;
    
    int ans = 0;
    for(int i = 1;i<=n;i++){
        cin >> x;
        pq2.push({x});
    }
 
    for(int i = 1;i<=m;i++){
        cin >> x;
        pq.push({x});
    }
    
    while(!pq.empty() && !pq2.empty()){
        int pop = 0;
        if(k == 0){
            if(pq.top().h == pq2.top().x){
                pq.pop();
                pq2.pop();
                ans++;
                pop = 1;
            }
        }
        else{
            if(pq.top().h >= pq2.top().x - k && pq.top().h <= pq2.top().x + k){
                pq.pop();
                pq2.pop();
                ans++;
                pop = 1;
            }
        }
        if(pop == 0){
            // cout << "H : " <<  pq.top().h << " X : " << pq2.top().x << endl;
            if(pq.top().h > pq2.top().x){
                pq.pop();
            }
            else pq2.pop();
        }
    }
    cout << ans;
 
}