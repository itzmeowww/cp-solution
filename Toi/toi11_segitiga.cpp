#include <bits/stdc++.h>
using namespace std;
char str[260];
int dp[260][260];
int val[100];

int solve(int s,int e){
    if(dp[s][e]!=0) return dp[s][e];
    if(s == e){
        return val[str[s] - '0'];
    }
    int ret = 0;
    for(int i = s;i<=e-1;i++){
        
        int l,r;
        if(dp[s][i] != 0 ) l = dp[s][i];
        else dp[s][i] = l = solve(s,i);

        if(dp[i+1][e] != 0 ) r = dp[i+1][e];
        else dp[i+1][e] = r = solve(i+1,e);

        if((l&val[0])!=0 && (r&val[0]) != 0) ret = (ret | val[2]); 
        if((l&val[0])!=0 && (r&val[1]) != 0) ret = (ret | val[1]); 
        if((l&val[0])!=0 && (r&val[2]) != 0) ret = (ret | val[0]); 
        if((l&val[1])!=0 && (r&val[0]) != 0) ret = (ret | val[2]); 
        if((l&val[1])!=0 && (r&val[1]) != 0) ret = (ret | val[1]); 
        if((l&val[1])!=0 && (r&val[2]) != 0) ret = (ret | val[1]); 
        if((l&val[2])!=0 && (r&val[0]) != 0) ret = (ret | val[1]); 
        if((l&val[2])!=0 && (r&val[1]) != 0) ret = (ret | val[2]); 
        if((l&val[2])!=0 && (r&val[2]) != 0) ret = (ret | val[1]); 

    }
    dp[s][e] = ret;
    return ret;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    val[0] = 1;
    val[1] = 2;
    val[2] = 4;

    for(int i = 1;i<=20;i++){
        scanf(" %d %s",&n,str);
        memset(dp,0,sizeof dp);
        if((solve(0,n-1) & val[0]) == val[0]) cout << "yes" << endl;
        else cout << "no" << endl;
    }

}