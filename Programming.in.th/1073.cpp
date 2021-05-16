#include <bits/stdc++.h>
using namespace std;
vector<int>v;
int main(){

    int l,t;
    cin >> l >> t;
    int n;
    cin >> n;
    int x;
    char c;
    for(int i = 1;i<=n;i++){
        cin >> x >> c;
        if(c == 'D'){
            x = x + t;
            x = x%(2*l);
            
            // cout << x << " ";
        }
        else if(c == 'L'){
            x = t - x;
            x = (x%(2*l) + 2*l)%(2*l);
            // cout << x << " ";
        }
        // cout << x << endl;
        if(x >= l) x = l - (x - l);
        
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(auto vv : v){
        cout << vv <<  " ";
    }
}