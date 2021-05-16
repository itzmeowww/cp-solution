#include <bits/stdc++.h>
using namespace std;
vector<long long>v;
int main(){
    int n,k;
    long long xi;
    cin >> n >> k;
    long long s=0,e = 2e18;
    for(int i = 1;i<=n;i++){
        cin >> xi;
        v.push_back(xi);
        s = max(s,xi);
    }
    
    long long ans;
    
    while(s<e){
        long long mid = (s+e)/2;
        long long sum = 0;
        int cou = 0;
        ans = 0;
        for(int i = 0;i<n;i++){
            if(sum + v[i] > mid){
                sum = 0;
                cou++;
            }
            sum += v[i];
            ans = max(ans,sum);
        }
        // cout << mid << " = " << cou << endl;
        if(cou <= k-1){
            e = mid;
        }
        else s = mid+1;
    }
    cout << s;

}