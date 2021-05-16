#include <bits/stdc++.h>
using namespace std;
map<int,int>no;
vector<int>v;
int main(){
    int n,m,x;
    scanf(" %d %d",&n,&m);

    for(int i = 1;i <= m;i++){
        scanf(" %d",&x);
        no[x] = 1;
    }
    for(int i = 1;i<=n;i++){
        v.push_back(i);
    }
    do{
        if(no[v.front()]) continue;
        for(auto vv : v){
            printf("%d ",vv);
        }
        printf("\n");
    }while(next_permutation(v.begin(),v.end()));

}