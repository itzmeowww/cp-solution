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
    if(n <= 2) cout << "no";
    else if(v[0] + v[1] <= v.back()) cout << "yes";
    else cout << "no";


}