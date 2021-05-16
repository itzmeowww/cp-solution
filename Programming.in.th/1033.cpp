#include <bits/stdc++.h>
using namespace std;

int g[111][111];
pair<int,int> loc[6];
int cou[6];
map<char,pair<int,int>> dir;

vector<int>vv[6];

int main(){

    int n,kk;
    cin >> n >> kk;
    loc[1] = {1,n};
    loc[2] = {n,n};
    loc[3] = {n,1};
    loc[4] = {1,1};
    g[1][n] = 1;
    g[n][n] = 2;
    g[n][1] = 3;
    g[1][1] = 4;
    
    dir['N'] = {-1,0};
    dir['S'] = {1,0};
    dir['E'] = {0,1};
    dir['W'] = {0,-1};
    char c;
    int maxx = 0;
    int couu = 0;

    for(int i = 1;i<=4;i++){
        for(int j = 1;j<=kk;j++){
            cin >> c;
            vv[i].push_back(c);
        }
    }

    for(int i = 1;i<=kk;i++){
        for(int j = 1;j<=4;j++){
            c = vv[j][i-1];

            int nr = dir[c].first + int(loc[j].first);
            int nc = dir[c].second + int(loc[j].second);

            int no = 0;
            for(int k = 1;k<=4;k++){
                if(k == j) continue;
                if(loc[k].first == nr && loc[k].second == nc){
                    no = 1;
                    break;
                }
            }

            if(nr >= 1 && nr <= n && nc >= 1 && nc <= n && no == 0){
                
                loc[j] = {nr,nc};
                g[nr][nc] = j;
            }

            // for(int ii = 1;ii<=n;ii++){
            //     for(int jj = 1;jj<=n;jj++){
            //         cout << g[ii][jj] << " ";
            //     }
            //     cout << endl;
            // }
            // cout << endl;
        }
    }

    
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(g[i][j] == 0){
                cout << "No";
                return 0;
            }
            cou[g[i][j]]++;
            if(cou[g[i][j]] > maxx){
                maxx = cou[g[i][j]];
                couu = 1;
            }
            else if(cou[g[i][j]] == maxx){
                couu++;
            }
        }
    }

    

    cout << couu << " " << maxx << endl;

  

    for(int i= 1;i<=4;i++){
        if(maxx == cou[i]){
            cout << i << endl;
        }
    }




}