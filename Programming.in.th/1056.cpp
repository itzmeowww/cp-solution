#include <bits/stdc++.h>
using namespace std;
vector<int>v;
int main(){
    int n,k;
    cin >> n >> k;
    int x;
    for(int i = 1;i<=n;i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    int cou = 0;
    int ans = 0;
    int maxx= 0;
    for(auto vv : v){
        cou++;
        maxx = max(maxx,vv);
        if(cou%k == 0){
            ans += maxx;
            maxx = 0;
        }
    }
    cout << ans + maxx;

}