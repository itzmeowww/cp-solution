#include <bits/stdc++.h>
using namespace std;
struct DATA{
    int r,c,s;
};
vector<DATA>v;
int main(){
    int n,m,k;

    cin >> n >> m >> k;
    int ans = 0;
    int cou;
    for(int i = 1;i<=k;i++){
        DATA x;
        cin >> x.r >> x.c >> x.s;
        v.push_back(x);
    }

    for(int i = 1;i<=n;i++){
        cou = 0;
        for(auto vv : v){
            if(vv.r - vv.s <= i && i <= vv.r + vv.s) cou++;
        }
        ans = max(ans,cou);
    }

    for(int i = 1;i<=m;i++){
        cou = 0;
        for(auto vv : v){
            if(vv.c - vv.s <= i && i <= vv.c + vv.s) cou++;
        }
        ans = max(ans,cou);
    }

    cout << ans;
}