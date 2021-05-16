#include <bits/stdc++.h>
using namespace std;

struct DATA
{
    int l,r;

    bool operator < (const DATA & d2) const {
        return (r-l) < (d2.r-d2.l);
    }
};


priority_queue<DATA>pq;
set<int>s;
int main(){
    int x,n,pi;
    cin >> x >> n;
    pq.push({0,x});
    for(int i = 1;i<=n;i++){
        cin >> pi;
        s.insert(pi);
        // cout << "========" << endl;
        while(!pq.empty() && !s.empty() && s.lower_bound(pq.top().l) != s.end() &&  *(s.lower_bound(pq.top().l)) >= pq.top().l && *(s.lower_bound(pq.top().l)) < pq.top().r ){
            int val = *(s.lower_bound(pq.top().l));
            s.erase(val);
            DATA top = pq.top();
            // cout << top.l << " " << top.r << " " << val << endl;
            pq.pop();
            if(val >= top.l){
                // cout << "Push " << top.l << " " << val-1 << endl;
                pq.push({top.l,val});
            }
            if(val <= top.r){
                // cout << "Push " << val << " " << top.r << endl;
                pq.push({val,top.r});
            }
        }
        
        
        // cout << "::" << pq.top().l << " " << pq.top().r << endl;
        cout << (pq.top().r - pq.top().l) << " ";
        
    }


}