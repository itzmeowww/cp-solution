#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v;
int main(){

    for(int i = 1;i<=5;i++){
        int sum = 0;
        int x;
        for(int j = 1;j<=4;j++){
            scanf(" %d",&x);
            sum += x;
        }
        v.push_back({sum,i});
    }
    sort(v.begin(),v.end());
    printf("%d %d",v.back().second,v.back().first);


}