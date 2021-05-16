#include <bits/stdc++.h>
using namespace std;
set<int>s;
int main(){
    int n,m,q;
    cin >> n >> m >> q;
    int a,b;
    for(int i = 1;i<=m;i++){
        cin >> a >> b;
        b = a+b-1;
        a--;
        if(s.find(a) != s.end()){
            s.erase(a);
        }
        else s.insert(a);

        if(s.find(b) != s.end()){
            s.erase(b);
        }
        else s.insert(b);
    }

    s.insert(n);
    s.insert(0);

    // for(auto ss : s){
    //     cout << ss << " ";
    // }
    // cout << endl;
    int x;
    
    while(q--){
        cin >> x;
        x--;
        auto itr = s.lower_bound(x+1);
        while(itr!=s.end()){
            if((*itr) >= x) break;
            else itr++;
        }
        auto itl = s.lower_bound(x);
        while(itl!=s.begin()){
            if((*itl) <= x) break;
            else itl--;
        }
        cout << (*itr) - (*itl) << endl;
       
    }
}