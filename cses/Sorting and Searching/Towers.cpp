#include <bits/stdc++.h>
using namespace std;
vector<int>v;
int main(){
    int n,ki;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> ki;
        int idx = upper_bound(v.begin(),v.end(),ki) - v.begin();
        // cout << ":: " << idx << endl;
        if(idx >= v.size()){
            v.push_back(ki);
        }
        else{
            v[idx] = ki;
        }
    }
    cout << v.size();



}