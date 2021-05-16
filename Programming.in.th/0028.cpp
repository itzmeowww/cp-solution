#include <bits/stdc++.h>
using namespace std;
struct DATA{
    string country;
    int pts;
    int get;
    int loss;
    bool operator < (const DATA & d2) const {
        if(pts != d2.pts) return pts > d2.pts;
        if(get-loss != d2.get-d2.loss) return get-loss > d2.get-d2.loss;
        return get > d2.get;
    }
};

vector<DATA>v;
int g[5][5];
int main(){
    string str;
    for(int i = 0;i<4;i++){
        cin >> str;
        v.push_back({str,0,0});
    }
    int x;
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            // if (i == j) continue;
            cin >> g[i][j];
            x = g[i][j];
            if(i == j) continue;
            v[i].get += x;
            v[j].loss += x;
        }
    }
    for(int i = 0;i<4;i++){
        for(int j = i+1;j<4;j++){
            if(g[i][j] == g[j][i]){
                v[i].pts += 1;
                v[j].pts += 1;
            }
            else if(g[i][j] > g[j][i]){
                v[i].pts += 3;
            }
            else if(g[i][j] < g[j][i]){
                v[j].pts += 3;
            }
        }
    }
    sort(v.begin(),v.end());
    for(auto vv : v){
        cout << vv.country << " " <<  vv.pts << endl;
    }
    


}