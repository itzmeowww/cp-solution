#include <bits/stdc++.h>
using namespace std;
vector<long long>v;
int main(){
    int n;
    int a,b;
    cin >> n;
    long long sum = 0,ans = -1e18;
    for(int i = 1;i <= n;i++){
        cin >> a >> b;
        v.push_back(b - 2*a);
        sum += b - 2*a;
    }
    ans = max(ans,sum);
    sort(v.begin(),v.end());
    // reverse(v.begin(),v.end());
    long long cou = 1;
    for(auto vv : v){
        // cout << -vv.first << " " << vv.second << endl;
        sum += 0 - vv - (cou*cou) + (cou-1)*(cou-1);
        cou++;
        ans = max(ans,sum);
    }
    cout << ans;
}