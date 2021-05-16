#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v;
multiset<int>s;
int main(){
    int n,k,a,b;
    cin >> n >> k;
    for(int i = 1;i <=n;i++){
        cin >> a >> b;
        v.push_back({b,a});
    }
    sort(v.begin(),v.end());
   
    int ans = 0;
    for(auto vv : v){
        // cout << "::" << vv.first << " " << vv.second << endl;
        auto it = s.lower_bound(vv.second+1);
        
        if(it!=s.begin()){
            it--;
            s.erase(it);
        }
        
        if(s.size() < k)
        {
            s.insert(vv.first);
            ans++;
        }
    }

    cout << ans;

}