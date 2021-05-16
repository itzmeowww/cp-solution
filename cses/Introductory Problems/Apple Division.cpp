#include <bits/stdc++.h>
using namespace std;

long long v[22];

int main(){
    int x,n;
    cin >> n;
    long long sum = 0;
    for(int i = 0;i<n;i++){
        cin >> v[i];
        sum += v[i];
    }
    long long all = 0,minn = 1e18;
    for(int i = 0;i<(1<<n);i++){
        // cout << i << ": ";
        all = 0;
        for(int j = 0;j<n;j++){
            if((i & (1<<j)) == (1<<j)){
                
                all += v[j];
            }
        }
        // cout << endl;
        minn = min(minn,abs(sum-2*all));
    }
    cout << minn;


}