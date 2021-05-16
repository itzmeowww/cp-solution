#include <bits/stdc++.h>
using namespace std;
struct DATA{
    int a,b;
    bool operator < (const DATA & d2) const {
        if(a == d2.a) return b > d2.b;
        return a < d2.a;
    }
};
vector<pair<int,int>>v,v2;
vector<DATA>ans;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a,b;
    for(int i = 1;i<=n;i++){
        cin >> a >> b;
        v.push_back({a,b});
        v2.push_back({b,a});
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int val = 0;
    for(auto x : v){
        if(x.second >= val){
            val = x.second;
            ans.push_back({x.first,x.second});
        }
    }
    sort(v2.begin(),v2.end());
    reverse(v2.begin(),v2.end());
    val = 0;
    for(auto x : v2){
        if(x.second >= val){
            val = x.second;
            ans.push_back({x.second,x.first});
        }
    }
    sort(ans.begin(),ans.end());
    int ba = -1,bb=-1;
    for(auto x : ans){
        if(x.a == ba && x.b == bb) continue;
        cout << x.a << " " << x.b << endl;
        ba = x.a;
        bb = x.b;
    }
    
    
}