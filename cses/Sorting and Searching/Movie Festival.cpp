#include <bits/stdc++.h>
using namespace std;
struct DATA{
    int a,b;

    bool operator < (const DATA & d2) const {
        if(a == d2.a) return b > d2.b;
        return a > d2.a; 
    }
};
vector<DATA>v;
int main(){
    int ans = 0,cur=0,a,b,n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    cur = 2e9;
    for(auto x : v){
        // cout << x.a  << " " << x.b << endl;
        if(x.b <= cur){
            ans++;
            cur = x.a;
        }
    }

    
    

    cout << ans;
}