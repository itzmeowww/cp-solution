#include <bits/stdc++.h>
using namespace std;
map<long long,int>cou;
int main(){
    
    long long xi,n;
    long long ans=0;
    long long sum = 0,x;
    cin >> n;
    cou[0]++;
    for(int i = 1;i<=n;i++){
        cin >> xi;
        xi = ((xi+n)%n+n)%n;
        sum += xi;
        sum%=n;
        // cout << ":" << sum << endl;
        ans += cou[((sum-n)%n+n)%n];
        cou[sum]++;
    }
    cout << ans;

}