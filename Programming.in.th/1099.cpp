#include <bits/stdc++.h>
using namespace std;
// Naive
int gcd(int a,int b){
    if(b % a == 0) return a;
    return gcd(b, b % a);
}

set<int>s;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int r,g;
    cin >> r >> g;
    int to = gcd(r,g);
    int d = 2;
    s.insert(1);
    while(to > 1){
        if(to % d == 0){
            while(to % d == 0){
                for(auto ss : s){
                    if(r%(ss*d)==0 && g%(ss*d)==0) s.insert(ss*d);
                }
                to/=d;
            }
        }
        
        d++;
    }
    for(auto ss : s){
        cout << ss << " " << r/ss << " " << g/ss << endl;
    }

}