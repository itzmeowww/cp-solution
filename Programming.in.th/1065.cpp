#include <bits/stdc++.h>
using namespace std;
struct DATA{
    int x1,y1,x2,y2;
};

bool check(DATA a,DATA b){
    if(a.x1 < b.x1 && b.x1 < a.x2 && a.y2 < b.y1 && b.y1 < a.y1) return true;
    if(a.x1 < b.x2 && b.x2 < a.x2 && a.y2 < b.y1 && b.y1 < a.y1) return true;
    if(a.x1 < b.x1 && b.x1 < a.x2 && a.y2 < b.y2 && b.y2 < a.y1) return true;
    if(a.x1 < b.x2 && b.x2 < a.x2 && a.y2 < b.y2 && b.y2 < a.y1) return true;

    return false;
}

vector <DATA> v;
int main(){

    int n,m;
    scanf(" %d %d",&n,&m);
    DATA data;
    for(int i = 1;i<=n;i++){
        scanf(" %d %d %d %d",&data.x1,&data.y1,&data.x2,&data.y2);
        v.push_back(data);
    }
    for(int i = 1;i<=m;i++){
        int ans = 0;
        scanf(" %d %d %d %d",&data.x1,&data.y1,&data.x2,&data.y2);
        for(auto vv : v){
            if(check(vv,data)) ans++;
        }
        printf("%d\n",ans);
    }

}