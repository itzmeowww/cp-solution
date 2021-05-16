#include <bits/stdc++.h>
using namespace std;

int g[1111][111];
int vis[1111][111];

struct DATA{
    int i,j;
    int t;
};

queue<DATA>q;

vector<int>ans;

int main(){
    int n;
    cin >> n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cin >> g[i][j];
        }
    }
    ans.resize(2*n);

    q.push({1,1,0});
    vis[1][1] = 1;
    while(!q.empty()){
        DATA f = q.front();
        q.pop();

        ans[f.t] = max(g[f.i][f.j],ans[f.t]);

        int ii[4] = {1,0,-1,0};
        int jj[4] = {0,-1,0,1};

        for(int k = 0;k<4;k++){
            int ni = ii[k] + f.i;
            int nj = jj[k] + f.j;
            int nt = f.t + 1;
            if (ni >= 1 && ni <= n && nj >= 1 && nj <= n){
                if(vis[ni][nj] == 1) continue;
                q.push({ni,nj,nt});
                vis[ni][nj] = 1;
            }
        }
    }

    long long sum = 0;
    for(int i = 1;i<=2*n-1;i++){
        sum += ans[i];
    }
    cout << sum;


}