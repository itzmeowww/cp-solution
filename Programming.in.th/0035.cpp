#include <bits/stdc++.h>
using namespace std;
vector<pair<double,double>>v;

int main(){

    int n;
    cin >> n;
    double x,y;
    for(int i = 1;i<=n;i++){
        cin >> x >> y;
        v.push_back({x,y});
    }
    double ans = 0,val = 0;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                val = abs(v[i].first*v[j].second + v[j].first*v[k].second + v[k].first*v[i].second - v[j].first*v[i].second - v[k].first*v[j].second - v[i].first*v[k].second)/2;
                ans = max(ans,val);
            }
        }
    }
    printf("%.3lf",ans);

}