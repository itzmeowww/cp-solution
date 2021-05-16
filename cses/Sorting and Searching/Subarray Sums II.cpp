#include <bits/stdc++.h>
using namespace std;
map<long long,int>cou;
int main(){
    int n;
    long long xi;
    long long ans=0;
    long long sum = 0,x;
    cin >> n >> x;
    cou[0] = 1;
    for(int i = 1;i<=n;i++){
        cin >> xi;
        sum += xi;
        ans += cou[sum-x];
        cou[sum]++;
    }
    cout << ans;

}