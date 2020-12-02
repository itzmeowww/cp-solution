#include <bits/stdc++.h>
using namespace std;
map<vector<pair<int,int>>,int>cou;
vector<pair<int,int>>v;
int main(){
    int t,q;
    scanf(" %d %d",&t,&q);
    int a,b,n;
    for(int i = 1;i<=t;i++){
        scanf(" %d",&n);
        v.clear();
        for(int i = 1;i<n;i++){
            scanf(" %d %d",&a,&b);
            v.push_back({min(a,b),max(a,b)});
        }
        sort(v.begin(),v.end());
        cou[v]++;
    }
    for(int i = 1;i<=q;i++){
        scanf(" %d",&n);
        v.clear();
        for(int i = 1;i<n;i++){
            scanf(" %d %d",&a,&b);
            v.push_back({min(a,b),max(a,b)});
        }
        sort(v.begin(),v.end());
        printf("%d\n",cou[v]);
    }
}