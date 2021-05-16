#include <bits/stdc++.h>
using namespace std;
long long choose(int n,int p){
    long long ret = 1;
    for(int i = p+1;i<=n;i++) ret*=i;
    for(int i =1;i<=n-p;i++) ret/=i;
    return ret;
}
int main(){
    int n;
    scanf(" %d",&n);
    if(n%2==0){
        printf("%lld",choose(n,n/2));
    }
    else printf("%lld",2*choose(n,n/2));


}