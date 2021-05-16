#include <bits/stdc++.h>
using namespace std;
priority_queue<int>pq,pq2;
int main(){
    int ans = 0,cur=0,a,b,n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> a >> b;
        pq.push(-a);
        pq2.push(-b);
    }
    while(!pq.empty()){
        cur++;
        while(!pq2.empty() && -pq.top() > -pq2.top()){
            pq2.pop();
            cur--;
        }
        pq.pop();
        ans = max(ans,cur);
    }

    

    cout << ans;
}