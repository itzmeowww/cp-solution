#include <bits/stdc++.h>
using namespace std;
deque<int>dq;
int main(){

    int n,x,pi;
    cin >> n >> x;
    for(int i = 1;i<=n;i++){
        cin >> pi;
        dq.push_back(pi);
    }
    sort(dq.begin(),dq.end());
    int sum = 0;
    int ans = 0;
    while(!dq.empty()){
        
        ans++;
        if(!dq.empty() && sum + dq.back() <= x){
            sum += dq.back();
            dq.pop_back();
        }
        if(!dq.empty() && sum + dq.front() <= x){
            sum += dq.front();
            dq.pop_front();
        }

        
        
        
        sum = 0;
        
    }
    cout << ans;

}