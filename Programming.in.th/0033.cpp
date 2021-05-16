#include <bits/stdc++.h>
using namespace std;

vector<int>ans;
map<int,int>cou;
int main(){
    int n,x;
    cin >> n;
    int maxx = 0;
    for(int i = 1;i<=n;i++){
        cin >> x;
        cou[x]++;
        if(cou[x] > maxx){
            maxx = cou[x];
            ans.clear();
        }
        if(cou[x] == maxx){
            ans.push_back(x);
        }
    }

    sort(ans.begin(),ans.end());
    for(auto aa : ans){
        cout << aa << " ";
    }
}