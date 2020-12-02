#include <bits/stdc++.h>
using namespace std;
char g[2002][2002];
int vis[2002][2002];

struct DATA{
    int r,c,t;
};
queue<DATA>q;
int main(){
    int n,m;
    cin >> n >> m;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j <= m;j++){
            cin >> g[i][j];
            if(g[i][j] == 'X'){
                q.push({i,j,0});
                vis[i][j] = 1;
            }
            
        }
    }
    int rr[4] = {0,1,0,-1};
    int cc[4] = {-1,0,1,0};
    long long ans = 0;
    int cou = 0;
    while(!q.empty()){
        
        int r = q.front().r;
        int c = q.front().c;
        int t = q.front().t;
        q.pop();
        for(int k = 0; k < 4;k++){
            int nr = r + rr[k];
            int nc = c + cc[k];
            int nt = t + 1;
            if(nr >= 1 && nr <= n && nc >= 1 && nc <= m){
                if(vis[nr][nc] == 0){
                    vis[nr][nc] = 1;
                    if(g[nr][nc] == 'E'){
                        q.push({nr,nc,nt});
                    }
                    else if(g[nr][nc] == 'A'){
                        q.push({nr,nc,nt});
                        ans += nt*2;
                        cou++;
                    }
                }
            }
        }
    }
    cout << cou << " " << ans;
    
}