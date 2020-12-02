#include <bits/stdc++.h>
using namespace std;
int g[155][155];
int vis[5][155][155];
int dis[5][155][155];
struct DATA{
    int r,c,t;
};
queue<DATA>q;
int main(){
    int n,m;
    cin >> n >> m;
    int si,sj,ei,ej;
    cin >> si >> sj >> ei >> ej;
    
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            cin >> g[i][j];
        }
    }
    int ii[4] = {0,-1,0,1};
    int jj[4] = {-1,0,1,0};

    q.push({si,sj,1});
    vis[0][si][sj] = 1;
    
    while(!q.empty()){
        int i = q.front().r;
        int j = q.front().c;
        int t = q.front().t;
        // cout << i << " " << j << " " << b << " " << t << endl;
        q.pop();
              
        for(int k = 0;k<4;k++){
            int ni = i + ii[k];
            int nj = j + jj[k];
            int nt = t + 1;
            if(ni >= 1 && ni <= n && nj >= 1 && nj <= m){
               
                if(g[ni][nj] == 1){
                    if(vis[0][ni][nj] == 0){
                        vis[0][ni][nj] = 1;
                        q.push({ni,nj,nt});
                    }
                }
                else{
                    
                    if(vis[0][ni][nj] == 0){
                        vis[0][ni][nj] = 1;
                        dis[0][ni][nj] = nt;
                    }
                    
                }
            }
        }
    }

    q.push({ei,ej,1});
    vis[1][ei][ej] = 1;
    
    while(!q.empty()){
        int i = q.front().r;
        int j = q.front().c;
        int t = q.front().t;
        // cout << i << " " << j << " " << b << " " << t << endl;
        q.pop();
              
        for(int k = 0;k<4;k++){
            int ni = i + ii[k];
            int nj = j + jj[k];
            int nt = t + 1;
            if(ni >= 1 && ni <= n && nj >= 1 && nj <= m){
               
                if(g[ni][nj] == 1){
                    if(vis[1][ni][nj] == 0){
                        vis[1][ni][nj] = 1;
                        q.push({ni,nj,nt});
                    }
                }
                else{
                    
                    if(vis[1][ni][nj] == 0){
                        vis[1][ni][nj] = 1;
                        dis[1][ni][nj] = nt;
                    }
                    
                }
            }
        }
    }
    int cou = 0;
    int ans = 2e9;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if(g[i][j] == 0){
                
                if(dis[0][i][j] != 0 && dis[1][i][j] != 0){
                    cou++;
                    // cout << i << "," << j << " " << dis[0][i][j] << " " << dis[1][i][j] << endl;
                    if(dis[0][i][j] + dis[1][i][j] - 1 < ans){
                        ans = dis[0][i][j] + dis[1][i][j] - 1;
                    }
                    
                }
            }
        }
    }
    

    cout << cou << endl << ans;



}