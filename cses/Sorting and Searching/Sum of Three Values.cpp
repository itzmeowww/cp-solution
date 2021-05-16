#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x,ai;
    cin >> n >> x;

    for(int i = 1;i<=n;i++){
        cin >> ai;
        v.push_back({ai,i});
    }
    sort(v.begin(),v.end());
    for(int i = 0;i < n;i++){
        for(int j = i+1, k = n-1;j<k;j++){
            long long x2 = x - v[i].first;
            while(j<k && v[j].first+v[k].first > x2) k--;
            if(j<k && v[j].first+v[k].first == x2){
                cout << v[j].second << " " << v[i].second << " " <<  v[k].second << endl;
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE";

}