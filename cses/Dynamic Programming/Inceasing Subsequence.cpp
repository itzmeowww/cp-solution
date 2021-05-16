#include <bits/stdc++.h>
using namespace std;
vector<int>v;
int main(){
    int n,x,bx;
    cin >> n;
    int ans = 1,cou = 1;
    for(int i = 1;i<=n;i++){
        cin >> x;
        int idx = lower_bound(v.begin(),v.end(),x) - v.begin();
        if(idx == v.size()){
            v.push_back(x);
        }
        else v[idx] = x;
    }
    cout << v.size();
}