#include <bits/stdc++.h>
using namespace std;
vector<int>v;

int main(){

    int n;
    cin >> n;
    int x;
    for(int i = 1;i<=n;i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    long long ans = 1;
    for(auto x : v){
        if(ans < x){
            break;
        }
        ans += x;
    }
    cout << ans;

}