#include <bits/stdc++.h>
using namespace std;
set<int>s;
queue<int>q;
int main(){
    int ans = 0;
    int n,ki;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> ki;
        q.push(ki);
        if(s.find(ki) != s.end()){
            while(!q.empty()){
                int f = q.front();
                s.erase(f);
                q.pop();
                if(f == ki){
                    break;
                }
            }
        }
        s.insert(ki);
        ans = max(ans,(int)s.size());
    }
    cout << ans;
    
}