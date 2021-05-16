#include <bits/stdc++.h>
using namespace std;
struct DATA{
    double price;
    int left;
    bool operator < (const DATA & d2) const {
        return price > d2.price;
    }
};
priority_queue<DATA>pq;
int main(){
    int n,p,q;
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> p >> q;
        pq.push({(double)p/q,q});
    }
    int t;
    cin >> t;
    int x;
    while(t--){
        double ans = 0;
        cin >> x;
        int minn;
        while(!pq.empty() && x > 0){
            
            DATA top = pq.top();
            // cout << top.price << " " << top.left << endl;
            pq.pop();
            
            minn = min(x,top.left);
            top.left -= minn;
            x -= minn;
            ans += top.price * minn;
            if(top.left > 0){
                pq.push(top);
            }
        }
        printf("%.3f\n",ans);
    }
}