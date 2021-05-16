#include <bits/stdc++.h>
using namespace std;
set<pair<int,int>>s;
int main(){

    int x,n;
    scanf(" %d",&n);
    for(int i = 1; i<=n;i++){
        scanf(" %d",&x);
        s.insert({i,x});
    }
    int ans = 0;
    while(s.size() > 1){
        int maxx = 0;
        pair<int,int>l,r,pickedL,pickedR; 
        l.first = -1;
        for(auto ss : s){
            if(l.first == -1){
                l = ss;
            }
            else{
                r = ss;
                if(abs(r.second - l.second) > maxx){
                    maxx = abs(r.second - l.second);
                    pickedL = l;
                    pickedR = r;
                }

                l = r;
            }
        }
        ans += maxx;
        s.erase(pickedL);
        s.erase(pickedR);
    }
    printf("%d",ans);

}