#include <bits/stdc++.h>
using namespace std;
vector<unsigned long long>v;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    unsigned long long ki;
    cin >> n >> t;
    for(int i = 1;i<=n;i++){
        cin >> ki;
        v.push_back(ki);
    }
    unsigned long long s = 0,e = 1e18;
    while(s < e){
        unsigned long long mid = (s+e)/2;
        unsigned long long sum = 0;
        for(auto x : v){
            sum += mid/x;
        }
        if(sum >= t){
            e = mid;
        }
        else s = mid+1;
    }
    cout << s;
}