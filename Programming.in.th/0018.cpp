#include <bits/stdc++.h>
using namespace std;
int np[1005];
int main(){

    int n,k;
    scanf(" %d %d",&n,&k);
    int ans = 0;
    for(int i = 2;i<=n;i++){
        if(np[i] == 1) continue;

        for(int j = 1;j<=n/i;j++){
            if(np[i*j] == 0){
                k--;
                if(k == 0){
                    ans = i*j;
                }
                np[i*j] = 1;
            }
            
        }
    }
    printf("%d",ans);


}