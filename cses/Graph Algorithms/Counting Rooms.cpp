#include <bits/stdc++.h>
using namespace std;
char g[1005][1005];
queue<pair<int,int>>q;
int main(){
    int n,m;
    cin >> n >> m;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cin >> g[i][j];
        }
    }
    int ix[4] = {-1,0,1,0};
    int jx[4] = {0,-1,0,1};
    int ans = 0;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            if(g[i][j] == '.'){
                ans++;
                q.push({i,j});
                g[i][j] = '#';
                while(!q.empty()){
                    int ii = q.front().first;
                    int jj = q.front().second;
                    q.pop();
                    for(int k = 0;k < 4;k++){
                        int ni = ii + ix[k];
                        int nj = jj + jx[k];
                        if(1 <= ni && ni <= n && 1 <= nj && nj <= m && g[ni][nj] == '.'){
                            g[ni][nj] = '#';
                            q.push({ni,nj});
                        }
                    }
                }
            }
        }
    }

    cout << ans;
    
}