#include <bits/stdc++.h>
using namespace std;
vector<int>v;
int main(){
    int n;
    cin >> n;
    int x;
    for(int i = 1;i <= n;i++){
        cin >> x;
        int idx = upper_bound(v.begin(),v.end(),x) - v.begin();
        if(idx >= v.size()) v.push_back(x);
        else v[idx] = x;
    }
    cout << n - v.size();

}