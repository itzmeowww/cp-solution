#include <bits/stdc++.h>
using namespace std;
char g[55][55];
struct DATA{
    int i,j,t;
};
queue<DATA>wa,me;

int main(){

    int r,c;
    cin >> r >> c;
    for(int i = 1;i<=r;i++){
        for(int j = 1;j<=c;j++){
            cin >> g[i][j];
            if(g[i][j] == 'S'){
                me.push({i,j,0});
            }
            else if(g[i][j] == '*'){
                wa.push({i,j,0});
            }

        }
    }
    int t = 0;
    int ii[4] = {0,1,0,-1};
    int jj[4] = {1,0,-1,0};

    while(!wa.empty() || !me.empty()){
        while(!wa.empty()){
            if(wa.front().t != t) break;
            DATA f = wa.front();
            wa.pop();

            for(int k = 0;k<4;k++){
                int ni = f.i + ii[k];
                int nj = f.j + jj[k];
                if(ni >= 1 && ni <= r && nj >= 1 && nj <= c){
                    if(g[ni][nj] == '.'){
                        g[ni][nj] = '*';
                        wa.push({ni,nj,f.t+1});
                    }
                }
            }

        }
        while(!me.empty()){
            if(me.front().t != t) break;
            DATA f = me.front();
            me.pop();

            for(int k = 0;k<4;k++){
                int ni = f.i + ii[k];
                int nj = f.j + jj[k];
                if(ni >= 1 && ni <= r && nj >= 1 && nj <= c){
                    if(g[ni][nj] == '.'){
                        g[ni][nj] = 'S';
                        me.push({ni,nj,f.t+1});
                    }
                    else if(g[ni][nj] == 'D'){
                        cout << t+1;
                        return 0;
                    }
                }
            }

        }
        t++;

    }

    cout << "KAKTUS";
    return 0;



}