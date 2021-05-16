#include <bits/stdc++.h>
using namespace std;
char g[1005][1005];
int vis[1005][1005];
struct DATA{
    int r,c;
    vector<char>path;
};
queue<DATA>q;
int main(){
    
    int n,m;
    scanf(" %d %d",&n,&m);
    for(int i = 1;i<=n;i++){
        scanf(" %s",&g[i][1]);
        for(int j = 1;j <=m;j++){
            if(g[i][j] == 'A'){
                q.push({i,j,{}});
                vis[i][j] = 1;
            }
        }
    }
    int rr[4] = {0,-1,0,1};
    int cc[4] = {-1,0,1,0};
    char p[4] = {'L','U','R','D'};
    while(!q.empty()){
        DATA f = q.front();
        // cout << f.r << ", " << f.c << ", " << f.path << endl;
        q.pop();
        
        for(int k = 0;k<4;k++){
            int nr = f.r + rr[k];
            int nc = f.c + cc[k];
            vector<char> np = f.path;
            np.push_back(p[k]);
            if(nr >= 1 && nr <= n && nc >= 1 && nc <= m && g[nr][nc] != '#' && vis[nr][nc] == 0){
                vis[nr][nc] = 1;
                if(g[nr][nc] == 'B'){
                    printf("YES\n");
                    printf("%d\n",np.size());
                    for(auto c : np) printf("%c",c);
                    return 0;
                }
                q.push({nr,nc,np});
            }
        }
    }
    cout << "NO";

}