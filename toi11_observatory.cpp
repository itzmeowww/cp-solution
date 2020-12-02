#include <bits/stdc++.h>
using namespace std;
long long arr[2005][2005];
long long ver[2005][2005];
long long hor[2005][2005];
long long dia[2005][2005];
long long dia2[2005][2005];
int main(){
    int m,n,k;
    scanf(" %d %d %d",&m,&n,&k);
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=n;j++){
            scanf(" %lld",&arr[i][j]);
            dia[i][j] = arr[i][j] + dia[i-1][j-1];
            hor[i][j] = arr[i][j] + hor[i][j-1]; 
            ver[i][j] = arr[i][j] + ver[i-1][j]; 
        }
    }
    for(int i = 1;i<=m;i++){
        for(int j = n;j>=1;j--){
            dia2[i][j] = arr[i][j] + dia2[i-1][j+1];
        }
    }
    
    long long sum1 = 0,sum2 = 0;
    for(int j = 1;j<=k;j++) sum1 += dia[k][j];
    for(int j = 1;j<=k;j++) sum2 += dia2[k][j] - dia2[j-1][1+k];
    long long ans = max(sum1,sum2);
    // cout << sum1 <<" " << sum2;
    for(int i = k;i<=m;i++){
        if(i != k){
            sum1 += hor[i][k];
            sum1 -= dia[i-1][k];
            sum2 += hor[i][k];
            sum2 -= dia2[i-1][1] - dia2[i-k-1][k+1];
        }
        long long cp1 = sum1;
        long long cp2 = sum2;
        ans = max(ans,max(cp1,cp2));
        // cout << i << ", " << k << " = " << cp1 << " : " << cp2 << endl;
        for(int j = k+1;j<=n;j++){
            
            
            cp1 += (dia[i][j] - dia[i-k][j-k]);
            cp1 -= (ver[i][j-k] - ver[i-k][j-k]);
            
            cp2 += (ver[i][j] - ver[i-k][j]);
            cp2 -= (dia2[i][j-k] - dia2[i-k][j]);
            ans = max(ans,max(cp1,cp2));
            // cout << i << ", " << j << " = " << cp1 << " : " << cp2 << endl;
        }
    }
    printf("%lld",ans);
}