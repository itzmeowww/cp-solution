#include <bits/stdc++.h>
using namespace std;
vector<int>v;
int main(){
    string a,b;
    cin >> a >> b;
    for(int i = 0;i<a.size();i++){
        if(!islower(a[i])) a[i] = tolower(a[i]);
        if(!islower(b[i])) b[i] = tolower(b[i]);
        int dif = ((a[i] - b[i])%26+26)%26;
        if(dif > 9){
            
            cout << "R.I.P.";
            return 0;
        }
        else{
            v.push_back(dif);
        }
    }
    for(auto x : v) cout << x;
}