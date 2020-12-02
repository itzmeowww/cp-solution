#include <bits/stdc++.h>
using namespace std;
char A[1111],B[1111],Q[2111];
int dp[1111][1111];
int main(){
    int m;
    scanf(" %s %s",&A[1],&B[1]);
    int a = 1,b = 1;
    while(A[a+1] != '\0') a++;
    while(B[b+1] != '\0') b++;

    scanf(" %d",&m);
    for(int i = 1;i<=m;i++){
        int q = 1;
        scanf(" %s",&Q[1]);
        while(Q[q+1] != '\0') q++;
        memset(dp,0,sizeof dp);
        dp[0][0] = 1;

        for(int i = 0;i<=a;i++){
            for(int j = 0;j<=b;j++){
                if(dp[i][j]  == 0) continue;

                if(A[i+1] == Q[dp[i][j]]){
                    dp[i+1][j] = dp[i][j]+1;
                }
                if(B[j+1] == Q[dp[i][j]]){
                    dp[i][j+1] = dp[i][j]+1;
                }
            }
        }
        // for(int i = 0;i<=a;i++){
        //     for(int j = 0;j<=b;j++){
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        if(dp[a][b] == a+b+1) printf("Yes\n");
        else printf("No\n"); 

    }

}