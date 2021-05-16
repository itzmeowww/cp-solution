#include <bits/stdc++.h>
using namespace std;
map<int,int>at;
int main(){
    int n,x,xi;
    cin >> n >> x;
    for(int i = 1;i<=n;i++){
        cin >> xi;
        if(at[x-xi]!=0){
            cout << at[x-xi] << " " << i << endl;
            return 0;
        }
        at[xi] = i;
    }
    cout << "IMPOSSIBLE";
}