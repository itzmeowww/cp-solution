#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    if(a == 0) return b;
    if(b == 0) return a;
    if(a%b == 0) return b;
    if(b%a == 0) return a;
    return gcd(b,a%b);
}
long long a[100100];
int main(){
    int n;
    long long di;
    cin >> n;
    for(int i = 1;i<=n;i++){
        cin >> a[i];
    }
    long long ans = 0,lcd = 1;
    for(int i = 1;i<=n;i++){
        lcd = lcd*a[i]/gcd(lcd,a[i]);
    }

    cout << lcd;
}