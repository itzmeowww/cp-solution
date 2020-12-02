#include <bits/stdc++.h>
using namespace std;
int t[1000000];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int m;
    long long n;

    cin >> m >> n;
    for(int i = 1;i<=m;i++){
        cin >> t[i];
    }
    long long s = 1,e = 1e18;
    while(s < e){
        long long mid = (s + e )/2;
        long long cou = 0;
        for(int i = 1;i<=m;i++){
            cou += mid / t[i];
        }
        if(cou >= n){
            e = mid;
        }
        else s = mid+1;
    }
    cout << s;
}