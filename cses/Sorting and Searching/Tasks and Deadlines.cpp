#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v;
int main(){
    int n,a,d;
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> a >> d;
        v.push_back({a,d});
    }
    sort(v.begin(),v.end());
    long long t = 0,ans = 0;
    
    for(auto x : v){
        t += x.first;
        ans += x.second - t;
        // cout << x.first << " " << x.second << endl;
    }
    cout << ans;
}