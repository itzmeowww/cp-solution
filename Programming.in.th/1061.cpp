#include <bits/stdc++.h>
using namespace std;
int g[22][22];
struct DATA{
    int r,c,t;
};
queue<DATA>q;
int main(){
    int ans = 0;
    int m;
    cin >> m;
    int r,c;
    cin >> c >> r;
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=m;j++){
            cin >> g[i][j];
        }
    }
    int rr[4] = {0,0,1,-1};
    int cc[4] = {-1,1,0,0};

    q.push({r,c,g[r][c]});
    g[r][c] = 100;
    while(!q.empty()){
        r = q.front().r;
        c = q.front().c;
        int t = q.front().t;
        ans = max(t,ans);
        q.pop();
        for(int k = 0;k < 4;k++){
            int nr = r + rr[k];
            int nc = c + cc[k];
            if(1 <= nr && nr <= m && 1 <= nc && nc <= m){
                if(g[nr][nc] > t && g[nr][nc] != 100){
                    q.push({nr,nc,g[nr][nc]});
                    
                    g[nr][nc] = 100;
                }
            }
        }
    }
    cout << ans;
}