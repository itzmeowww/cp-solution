#include <bits/stdc++.h>
using namespace std;
priority_queue<pair<int,int>>l,r;
int main(){
    int n,k,x;
    cin >> n >> k;
    for(int i = 1;i<=n;i++){
        cin >> x;
        if(i%2==1){
            l.push({x,i});
        }
        else                                                       {
            r.push({-x,i});
        }
        if(i >= k){
            while(!l.empty() && l.top().second < i){
                l.pop();
            }

            cout << l.top().first << " ";
        }
    }
}