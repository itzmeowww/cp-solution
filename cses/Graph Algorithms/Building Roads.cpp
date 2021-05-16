#include <bits/stdc++.h>
using namespace std;
int pa[100100];
int fp(int x){
    if(pa[x] == x) return x;
    return pa[x] = fp(pa[x]);
}
int have[100100];
vector<int>v;
int main(){

    int n,m;
    cin >> n >> m;
    for(int i = 1;i <= n;i++) pa[i] = i;
    int a,b;
    for(int i = 1;i <= m;i++){
        cin >> a >> b;
        pa[fp(a)] = fp(b);
    }
    for(int i = 1;i<=n;i++){
        if(have[fp(i)] == 0){
            have[fp(i)] = 1;
            v.push_back(fp(i));
        }
    }
    cout << v.size()-1 << endl;
    for(int i = 0;i<v.size()-1;i++){
        cout << v[i] << " " << v[i+1] << endl;
    }
    

    
}