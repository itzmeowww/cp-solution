#include <bits/stdc++.h>
using namespace std;
struct DATA{
    int a,b,idx;
    bool operator < (const DATA & d2) const {
        if(a == d2.a) return b < d2.b;
        return a < d2.a;
    }
};
vector<DATA>v;
int ans[200200];
priority_queue<pair<int,int>>pq;
int main(){
    int n,a,b;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> a >> b;
        v.push_back({a,b,i});
    }
    sort(v.begin(),v.end());
    int k = 0;
    for(auto x: v){
        // cout << " - " << x.a << " " << x.b << endl;
        if(pq.empty() || -pq.top().first >= x.a){
            pq.push({-x.b,++k});
            ans[x.idx] = k;
        }
        else{
            auto top = pq.top();
            pq.pop();
            pq.push({-x.b,top.second});
            ans[x.idx] = top.second;
        }
        // cout << pq.top().first << " " << pq.top().second << endl;
    }
    cout << k << endl;
    for(int i = 1;i<=n;i++){
        cout << ans[i] << " ";
    }
}