#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,q;
    
    scanf("%d",&q);
    while(q--){
        long double ans = 1;
        scanf(" %d",&n);
        for(int i = 1;i <= n;i++){
            ans*=2;
        }
        printf("%.0llf\n",ans);
    }
    

}