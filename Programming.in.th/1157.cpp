// TOI8
#include <bits/stdc++.h>
using namespace std;
struct DATA{
    int p,i;
    bool operator < (const DATA & d2) const{
        return p > d2.p;
    }
};
priority_queue<DATA>pq;
int main(){
    int x,n,k;
    cin >> n >> k;
    cin >> x;
    pq.push({x,1});
    for(int i = 2;i<=n;i++){
        cin >> x;
        if(pq.empty()) pq.push({x,i});
        else{
            while(!pq.empty() && pq.top().i < i - k){
                pq.pop();
            }
            // cout << pq.top().p << " " << pq.top().i << endl;
            pq.push({pq.top().p+x,i});
        }
    }
    while(!pq.empty() && pq.top().i != n){
        pq.pop();
    }
    cout << pq.top().p;
}