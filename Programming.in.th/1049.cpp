#include <bits/stdc++.h>
using namespace std;

queue<pair<int,int>>q[10100];

set<int>s;
int main(){
    int n,m;
    cin >> n >> m;
    int ai,li,si;
    
    for(int i = 1;i<=n;i++){
        cin >> ai >> li >> si;
        q[li].push({si,ai});
        s.insert(li);
    }
    int have = 1;
    while(have){
        int ans;
        int maxx = 0;
        have = 0;
        vector<int>rem;
        for(auto i : s){
            // cout << ": " << i << endl;
            if(!q[i].empty()){
                have = 1;
                auto f = q[i].front();
                q[i].pop();
                if(f.first > maxx){
                    maxx = f.first;
                    ans = f.second;
                }
            }
            else{
                rem.push_back(i);
            }
        }
        for(auto rr : rem) s.erase(rr);
        if(have == 0) break; 
        cout << ans << endl;
    }


}