#include <bits/stdc++.h>
using namespace std;
char g[2002][2002];
queue<pair<int,int>>q;
int main(){
    int iii[8] = {0,-1,-1,-1,0,1,1,1};
    int jjj[8] = {-1,-1,0,1,1,1,0,-1};
    int n,m;
    int ans = 0;
    scanf(" %d %d",&n,&m);
    for(int i = 1;i<=n;i++){
        scanf(" %s",&g[i][1]);
    }

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if(g[i][j] == '1'){
                ans++;
                g[i][j] = '0';
                q.push({i,j});
                while(!q.empty()){
                    int ii = q.front().first;
                    int jj = q.front().second;
                    q.pop();
                    for(int k = 0;k<8;k++){
                        int ni = ii + iii[k];
                        int nj = jj + jjj[k];
                        if(1 <= ni && ni <= n && 1 <= nj && nj <= m){
                            if(g[ni][nj] == '1'){
                                g[ni][nj] = '0';
                                q.push({ni,nj});
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d",ans);
}