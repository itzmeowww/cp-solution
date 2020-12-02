#include <bits/stdc++.h>
using namespace std;
char g[21][21];
int main(){

    int n,m;
    scanf(" %d %d",&n,&m);
    for(int i = 0 ;i < n;i++){
        for(int j = 0; j< m; j++){
            scanf(" %c",&g[i][j]);
        }
    }

    int ji;
    for(int i = 0;i < m; i++){
        scanf(" %d",&ji);
        int nub = 0;
        while(1){
            //cout << nub << endl;
            if(g[nub][i] == 'O' || nub > n-1){
                break;
            }
            nub++;
        }

        while(1){
            ji--;
            nub--;
            if(nub < 0 || ji < 0) break;
            g[nub][i] = '#';
        }
    }

    for(int i = 0 ;i < n;i++){
        for(int j = 0; j< m; j++){
            printf("%c",g[i][j]);
        }
        printf("\n");
    }

}
