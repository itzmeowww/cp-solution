#include <bits/stdc++.h>
using namespace std;
int g[3][101][101];
int qsV[3][101];
int qsH[3][101];

int main(){
    int n,m;
    cin >> n >> m;
    int sum = 0;
    for(int k = 0;k<2;k++){
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                cin >> g[k][i][j];
                if(k == 0){
                    sum += g[0][i][j];
                }
            }
        }
    }

    for(int k = 0;k<2;k++){
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                qsV[k][i] += g[k][i][j];
                qsH[k][j] += g[k][i][j];
            }
        }
    }
    int ans = 0;
    for(int i = 1;i<=n;i++){
        ans = max(ans,sum - qsV[0][i] + qsV[1][i+1]  + qsV[1][i-1] );
    }   
    for(int j = 1;j<=m;j++){
        ans = max(ans,sum - qsH[0][j] + qsH[1][j+1]  + qsH[1][j-1] );
    }
    cout << ans;

    


}