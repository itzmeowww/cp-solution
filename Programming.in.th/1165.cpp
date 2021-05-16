#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
    // cout << a << " " << b << endl;
    if(a%b == 0) return b;
    return gcd(b,a%b);    
}
int main(){
    int n;
    scanf(" %d",&n);
    long long ans,x;
    scanf(" %lld",&ans);
    n--;
    for(int i = 1;i<=n;i++){
        scanf(" %lld",&x);
        ans = gcd(x,ans);
    }

    long long cou = 1,nub = 0;
    
    int d = 2;
    while(ans > 1){
        nub = 0;
        if(ans % d == 0){
            while(ans % d == 0){
                nub++;
                ans/=d;
            }
            cou *= (nub+1);
        }
        d++;
    }

    printf("%lld",cou);
}