#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    if(a == 0) return b;
    if(b == 0) return a;
    if(a%b == 0) return b;
    if(b%a == 0) return a;
    return gcd(b,a%b);
}

int main(){
    long long a,b;
    cin >> a >> b;
    cout << a*b/gcd(a,b);
}