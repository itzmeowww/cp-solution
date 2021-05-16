#include <bits/stdc++.h>
using namespace std;
set<pair<int,int>>h;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,x;
    cin >> n >> m;
    for(int i = 1;i<=n;i++){
        cin >> x;
        h.insert({x,i});
    }
    for(int i = 1;i<=m;i++){
        cin >> x;
        auto idx = h.lower_bound({x+1,0});
        if(idx == h.begin()){
            printf("-1\n");
        }
        else{
            --idx;
            printf("%d\n",(*idx).first);
            h.erase(idx);
        }

        
    }
    


}