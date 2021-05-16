#include <bits/stdc++.h>
using namespace std;
void gen(int k,int a,int b,vector<char>v){
    if(a >= k || b >= k ){
        for(auto vv : v) cout << vv << " ";
        cout << endl;
        return;
    }
    if(a < k){
        v.push_back('W');
        gen(k,a+1,b,v);
        v.pop_back();
    }
    if(b < k){
        v.push_back('L');
        gen(k,a,b+1,v);
        v.pop_back();
    }
}
int main(){
    int k,a,b;
    cin >> k >> a >> b;
    gen(k,a,b,{});
}