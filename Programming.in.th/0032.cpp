#include <bits/stdc++.h>
using namespace std;
vector<int>v;
int main(){

    int cou = 0;
    int n,x;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> x;
        if(x == 0) cou++;
        else v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout << v.front();
    while(cou--) cout << "0";
    for(int i = 1;i<v.size();i++) cout << v[i];

}