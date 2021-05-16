#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
    if(b % a == 0) return a;
    return gcd(b,a%b);
}
long long lcm(long long a,long long b){
    // cout << "gcd " << a << " " << b << " = " << gcd(a,b) << endl;
    return a*b/gcd(a,b);
}
int main(){
    int n;
    scanf(" %d",&n);
    
    long long x,ret;
    scanf("%lld",&ret);
    for(int i = 2;i<=n;i++){
        scanf(" %lld",&x);
        // cout << ret << endl;
        ret = lcm(ret,x);
        
    }
    printf("%lld",ret);
}